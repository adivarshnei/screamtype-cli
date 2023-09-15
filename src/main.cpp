#include <sys/ioctl.h>

#include "charmap.h"
#include "funcs.h"

int
main(int argc, char **argv)
{
    struct winsize sz;
    ioctl(0, TIOCGWINSZ, &sz);

    if ( argc != 1 )
    {
        std::string string;

        for ( int i = 1; i < argc; i++ )
        {
            string.append(std::string(argv[i]));
            string.push_back(' ');
        }

        args_scream(sz, string);
    }
    else
    {
        inte_scream(sz);
    }

    return 0;
}
