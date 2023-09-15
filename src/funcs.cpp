#include <string.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>

#include "charmap.h"
#include "funcs.h"

int
get_split(std::string const string, unsigned short int const col_size)
{
    int char_count = 0;
    int tot_len = 0;

    for ( char x : string )
    {
        if ( tot_len + lens[x - ' '] >= col_size )
        {
            break;
        }
        else
        {
            tot_len += lens[x - ' '];
            char_count++;
        }
    }

    return char_count;
}

extern void
get_scream(std::string         &scream,
           struct winsize const sz,
           std::string const    string)
{
    int chars_left = string.size();
    int split_point = 0;
    int offset = 0;

    if ( !scream.empty() )
    {
        scream = "";
    }

    while ( chars_left > 0 )
    {
        split_point = get_split(string.substr(offset), sz.ws_col);

        for ( int i = 0; i < CHAR_HEIGHT; i++ )
        {
            for ( int j = 0; j < split_point; j++ )
            {
                scream.append(map[string.at(j + offset) - ' '][i]);
            }

            scream.append("\n");
        }

        offset += split_point;
        chars_left -= split_point;
    }
}

void
args_scream(struct winsize const sz, std::string const string)
{
    int chars_left = string.size();
    int split_point = 0;
    int offset = 0;

    while ( chars_left > 0 )
    {
        split_point = get_split(string.substr(offset), sz.ws_col);

        for ( int i = 0; i < CHAR_HEIGHT; i++ )
        {
            for ( int j = 0; j < split_point; j++ )
            {
                std::cout << map[string.at(j + offset) - ' '][i];
            }

            std::cout << std::endl;
        }

        offset += split_point;
        chars_left -= split_point;
    }
}

void
inte_scream(struct winsize const sz)
{
    struct termios orig;
    struct termios raw;
    char const     CLEAR_SCREEN[] = "\x1b[2J";
    char const     CURSOR_TOP_LEFT[] = "\x1b[1;1H";
    char const     HIDE_CURSOR[] = "\x1b[?25l";
    char const     SHOW_CURSOR[] = "\x1b[?25h";
    std::string    string;
    std::string    scream;

    tcgetattr(STDIN_FILENO, &orig);
    tcgetattr(STDIN_FILENO, &raw);

    raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
    raw.c_cflag |= (CS8);
    raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);

    write(STDOUT_FILENO, CLEAR_SCREEN, strlen(CLEAR_SCREEN));
    write(STDOUT_FILENO, CURSOR_TOP_LEFT, strlen(CURSOR_TOP_LEFT));
    write(STDOUT_FILENO, HIDE_CURSOR, strlen(HIDE_CURSOR));

    while ( true )
    {
        char c;

        if ( c == ('q' & 0x1f) )
        {
            break;
        }
        else
        {
            read(STDIN_FILENO, &c, 1);
            ioctl(0, TIOCGWINSZ, &sz);
            write(STDOUT_FILENO, CLEAR_SCREEN, strlen(CLEAR_SCREEN));
            write(STDOUT_FILENO, CURSOR_TOP_LEFT, strlen(CURSOR_TOP_LEFT));

            if ( c == 127 )
            {
                if ( !string.empty() )
                {
                    string.pop_back();
                }

                if ( string.size() != 0 )
                {
                    get_scream(scream, sz, string);
                }
                else
                {
                    scream = "";
                }

                write(STDOUT_FILENO, CLEAR_SCREEN, strlen(CLEAR_SCREEN));

                printf("%s\n", scream.c_str());
            }
            else if ( !iscntrl(c) )
            {
                string.push_back(c);
                get_scream(scream, sz, string);

                printf("%s\n", scream.c_str());
            }
        }
    }

    write(STDOUT_FILENO, SHOW_CURSOR, strlen(SHOW_CURSOR));
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig);
}
