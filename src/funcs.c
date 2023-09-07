#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>

#include "charmap.h"
#include "funcs.h"

int
get_split(char const *string, unsigned short int const col_size)
{
    int char_count = 0;
    int tot_len = 0;

    for ( int i = 0; string[i] != '\0'; i++ )
    {
        if ( tot_len + lens[string[i] - ' '] >= col_size )
        {
            break;
        }
        else
        {
            tot_len += lens[string[i] - ' '];
            char_count++;
        }
    }

    return char_count;
}

void
nc_scream(struct winsize const sz, char const *string)
{
    int chars_left = strlen(string);
    int split_point = 0;
    int offset = 0;

    while ( chars_left > 0 )
    {
        split_point = get_split(string + offset, sz.ws_col);

        for ( int i = 0; i < 6; i++ )
        {
            for ( int j = 0; j < split_point; j++ )
            {
                printf("%s", map[string[j + offset] - ' '][i]);
            }

            printf("\n");
        }

        offset += split_point;
        chars_left -= split_point;
    }
}

char *
get_scream(char *scream, struct winsize const sz, char const *string)
{
    int chars_left = strlen(string);
    int split_point = 0;
    int offset = 0;

    // char scream[5000];
    int index = 0;

    scream[0] = '\0';

    while ( chars_left > 0 )
    {
        split_point = get_split(string + offset, sz.ws_col);

        for ( int i = 0; i < 6; i++ )
        {
            for ( int j = 0; j < split_point; j++ )
            {
                strcat(scream, map[string[j + offset] - ' '][i]);
                // printf("%s", map[string[j + offset] - ' '][i]);
            }

            strcat(scream, "\n");
            // printf("\n");
        }

        offset += split_point;
        chars_left -= split_point;
    }

    return scream;
}

// TODO: CHANGE HOW THIS IS DONE. MAYBE WRITE ONLY THE NEW CHAR INSTEAD OF THE
// WHOLE STRING AGAIN?
void
c_scream(struct winsize const sz)
{
    initscr();              // Initialize terminal
    cbreak();               // One character at a time, no buffering
    noecho();               // Don't echo typed characters
    keypad(stdscr, TRUE);   // Capture spec. chars (Bksp, Del, Arrows, etc.)

    int ch;
    nodelay(stdscr, TRUE);

    char string[500] = "hi";
    char clear[500] = "";
    char tmp[] = " ";

    for ( int i = 0; i < 499; i++ )
    {
        clear[i] = ' ';
    }

    clear[499] = '\0';

    char scream[5000];

    for ( ;; )
    {

        if ( (ch = wgetch(stdscr)) == ERR )
        {
        }
        else
        {
            clear();

            switch ( ch )
            {
            case KEY_BACKSPACE:
                string[strlen(string) - 1] = '\0';
                for ( int i = 0; i < sz.ws_col; i++ )
                {
                    move(0, 0);
                }

                clear();

                break;

            default:
                tmp[0] = ch;
                strcat(string, tmp);
                get_scream(scream, sz, string);
                break;
            }

            int y = 0;
            int x = 0;

            for ( int i = 0; scream[i] != '\0'; i++ )
            {
                char buf[100];
                snprintf(buf, sizeof(buf), "echo -n %d >> OUT.txt", y);
                system(buf);
                if ( scream[i] == '\n' )
                {
                    y++;
                    x = 0;
                }
                else
                {
                    move(y, x);
                    addch(scream[i]);
                    x++;
                }
            }

            system("echo '' >> OUT.txt");
        }
    }

    endwin();
}
