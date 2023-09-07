#include <ncursesw/curses.h>
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
        char *string = argv[1];
        nc_scream(sz, string);
    }
    else
    {
        c_scream(sz);
    }

    return 0;
}
