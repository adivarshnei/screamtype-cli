#include "charmap.h"

char const *map[95][6] = {
    { "     ", "     ", "     ", "     ", "     ", "     " },
    { "  _ ", " | |", " | |", " |_|", " (_)", "    " },
    { "  _ _ ", " ( | )", "  V V ", "      ", "      ", "      " },
    {
     "    _  _   ", "  _| || |_ ",
     " |_  ..  _|", " |_      _|",
     "   |_||_|  ", "           ",
     },
    { "   _  ", "  | | ", " / __)", " \\__ \\", " (   /", "  |_| " },
    { "  _  __", " (_)/ /", "   / / ", "  / /_ ", " /_/(_)", "       " },
    {
     "   ___   ", "  ( _ )  ",
     "  / _ \\/\\", " | (_>  <",
     "  \\___/\\/", "         ",
     },
    { "  _ ", " ( )", " |/ ", "    ", "    ", "    " },
    { "   __", "  / /", " | | ", " | | ", " | | ", "  \\_\\" },
    { " __  ", " \\ \\ ", "  | |", "  | |", "  | |", " /_/ " },
    { "       ", " __/\\__", " \\    /", " /_  _\\", "   \\/  ", "       " },
    { "        ", "    _   ", "  _| |_ ", " |_   _|", "   |_|  ", "        " },
    { "    ", "    ", "    ", "  _ ", " ( )", " |/ " },
    { "        ", "        ", "  _____ ", " |_____|", "        ", "        " },
    { "    ", "    ", "    ", "  _ ", " (_)", "    " },
    { "     __", "    / /", "   / / ", "  / /  ", " /_/   ", "       " },
    { "   ___  ",
     "  / _ \\ ", " | | | |",
     " | |_| |", "  \\___/ ",
     "        " },
    { "  _ ", " / |", " | |", " | |", " |_|", "    " },
    { "  ____  ",
     " |___ \\ ", "   __) |",
     "  / __/ ", " |_____|",
     "        " },
    { "  _____ ",
     " |___ / ", "   |_ \\ ",
     "  ___) |", " |____/ ",
     "        " },
    { "  _  _   ",
     " | || |  ", " | || |_ ",
     " |__   _|", "    |_|  ",
     "         " },
    { "  ____  ",
     " | ___| ", " |___ \\ ",
     "  ___) |", " |____/ ",
     "        " },
    { "   __   ",
     "  / /_  ", " | '_ \\ ",
     " | (_) |", "  \\___/ ",
     "        " },
    { "  _____ ", " |___  |", "    / / ", "   / /  ", "  /_/   ", "        " },
    { "   ___  ",
     "  ( _ ) ", "  / _ \\ ",
     " | (_) |", "  \\___/ ",
     "        " },
    { "   ___  ",
     "  / _ \\ ", " | (_) |",
     "  \\__, |", "    /_/ ",
     "        " },
    { "    ", "  _ ", " (_)", "  _ ", " (_)", "    " },
    { "    ", "  _ ", " (_)", "  _ ", " ( )", " |/ " },
    { "   __", "  / /", " / / ", " \\ \\ ", "  \\_\\", "     " },
    { "        ", "  _____ ", " |_____|", " |_____|", "        ", "        " },
    { " __  ", " \\ \\ ", "  \\ \\", "  / /", " /_/ ", "     " },
    { "  ___ ", " |__ \\", "   / /", "  |_| ", "  (_) ", "      " },
    {
     "    ____  ", "   / __ \\ ",
     "  / / _` |", " | | (_| |",
     "  \\ \\__,_|", "   \\____/ ",
     },
    {
     "     _    ", "    / \\   ",
     "   / _ \\  ", "  / ___ \\ ",
     " /_/   \\_\\", "          ",
     },
    { "  ____  ",
     " | __ ) ", " |  _ \\ ",
     " | |_) |", " |____/ ",
     "        " },
    { "   ____ ",
     "  / ___|", " | |    ",
     " | |___ ", "  \\____|",
     "        " },
    { "  ____  ",
     " |  _ \\ ", " | | | |",
     " | |_| |", " |____/ ",
     "        " },
    { "  _____ ", " | ____|", " |  _|  ", " | |___ ", " |_____|", "        " },
    { "  _____ ", " |  ___|", " | |_   ", " |  _|  ", " |_|    ", "        " },
    { "   ____ ",
     "  / ___|", " | |  _ ",
     " | |_| |", "  \\____|",
     "        " },
    { "  _   _ ", " | | | |", " | |_| |", " |  _  |", " |_| |_|", "        " },
    { "  ___ ", " |_ _|", "  | | ", "  | | ", " |___|", "      " },
    { "      _ ",
     "     | |", "  _  | |",
     " | |_| |", "  \\___/ ",
     "        " },
    { "  _  __", " | |/ /", " | ' / ", " | . \\ ", " |_|\\_\\", "       " },
    { "  _     ", " | |    ", " | |    ", " | |___ ", " |_____|", "        " },
    {
     "  __  __ ", " |  \\/  |",
     " | |\\/| |", " | |  | |",
     " |_|  |_|", "         ",
     },
    { "  _   _ ",
     " | \\ | |", " |  \\| |",
     " | |\\  |", " |_| \\_|",
     "        " },
    { "   ___  ",
     "  / _ \\ ", " | | | |",
     " | |_| |", "  \\___/ ",
     "        " },
    { "  ____  ",
     " |  _ \\ ", " | |_) |",
     " |  __/ ", " |_|    ",
     "        " },
    { "   ___  ",
     "  / _ \\ ", " | | | |",
     " | |_| |", "  \\__\\_\\",
     "        " },
    { "  ____  ",
     " |  _ \\ ", " | |_) |",
     " |  _ < ", " |_| \\_\\",
     "        " },
    { "  ____  ",
     " / ___| ", " \\___ \\ ",
     "  ___) |", " |____/ ",
     "        " },
    { "  _____ ", " |_   _|", "   | |  ", "   | |  ", "   |_|  ", "        " },
    { "  _   _ ",
     " | | | |", " | | | |",
     " | |_| |", "  \\___/ ",
     "        " },
    {
     " __     __", " \\ \\   / /",
     "  \\ \\ / / ", "   \\ V /  ",
     "    \\_/   ", "          ",
     },
    {
     " __        __", " \\ \\      / /",
     "  \\ \\ /\\ / / ", "   \\ V  V /  ",
     "    \\_/\\_/   ", "             ",
     },
    { " __  __", " \\ \\/ /", "  \\  / ", "  /  \\ ", " /_/\\_\\", "       " },
    { " __   __",
     " \\ \\ / /", "  \\ V / ",
     "   | |  ", "   |_|  ",
     "        " },
    { "  _____", " |__  /", "   / / ", "  / /_ ", " /____|", "       " },
    { "  __ ", " | _|", " | | ", " | | ", " | | ", " |__|" },
    { " __    ",
     " \\ \\   ", "  \\ \\  ",
     "   \\ \\ ", "    \\_\\",
     "       " },
    { "  __ ", " |_ |", "  | |", "  | |", "  | |", " |__|" },
    { "  /\\ ", " |/\\|", "     ", "     ", "     ", "     " },
    { "        ", "        ", "        ", "        ", "  _____ ", " |_____|" },
    { "  _ ", " ( )", "  \\|", "    ", "    ", "    " },
    { "        ",
     "   __ _ ", "  / _` |",
     " | (_| |", "  \\__,_|",
     "        " },
    { "  _     ",
     " | |__  ", " | '_ \\ ",
     " | |_) |", " |_.__/ ",
     "        " },
    { "       ", "   ___ ", "  / __|", " | (__ ", "  \\___|", "       " },
    { "      _ ",
     "   __| |", "  / _` |",
     " | (_| |", "  \\__,_|",
     "        " },
    { "       ", "   ___ ", "  / _ \\", " |  __/", "  \\___|", "       " },
    { "   __ ", "  / _|", " | |_ ", " |  _|", " |_|  ", "      " },
    { "        ",
     "   __ _ ", "  / _` |",
     " | (_| |", "  \\__, |",
     "  |___/ " },
    { "  _     ",
     " | |__  ", " | '_ \\ ",
     " | | | |", " |_| |_|",
     "        " },
    { "  _ ", " (_)", " | |", " | |", " |_|", "    " },
    { "    _ ", "   (_)", "   | |", "   | |", "  _/ |", " |__/ " },
    { "  _    ", " | | __", " | |/ /", " |   < ", " |_|\\_\\", "       " },
    { "  _ ", " | |", " | |", " | |", " |_|", "    " },
    {
     "            ", "  _ __ ___  ",
     " | '_ ` _ \\ ", " | | | | | |",
     " |_| |_| |_|", "            ",
     },
    { "        ",
     "  _ __  ", " | '_ \\ ",
     " | | | |", " |_| |_|",
     "        " },
    { "        ",
     "   ___  ", "  / _ \\ ",
     " | (_) |", "  \\___/ ",
     "        " },
    { "        ",
     "  _ __  ", " | '_ \\ ",
     " | |_) |", " | .__/ ",
     " |_|    " },
    { "        ",
     "   __ _ ", "  / _` |",
     " | (_| |", "  \\__, |",
     "     |_|" },
    { "       ", "  _ __ ", " | '__|", " | |   ", " |_|   ", "       " },
    { "      ", "  ___ ", " / __|", " \\__ \\", " |___/", "      " },
    { "  _   ", " | |_ ", " | __|", " | |_ ", "  \\__|", "      " },
    { "        ",
     "  _   _ ", " | | | |",
     " | |_| |", "  \\__,_|",
     "        " },
    { "        ",
     " __   __", " \\ \\ / /",
     "  \\ V / ", "   \\_/  ",
     "        " },
    {
     "           ", " __      __",
     " \\ \\ /\\ / /", "  \\ V  V / ",
     "   \\_/\\_/  ", "           ",
     },
    { "       ", " __  __", " \\ \\/ /", "  >  < ", " /_/\\_\\", "       " },
    { "        ",
     "  _   _ ", " | | | |",
     " | |_| |", "  \\__, |",
     "  |___/ " },
    { "      ", "  ____", " |_  /", "  / / ", " /___|", "      " },
    { "    __", "   / /", "  | | ", " < <  ", "  | | ", "   \\_\\" },
    { "  _ ", " | |", " | |", " | |", " | |", " |_|" },
    { " __   ", " \\ \\  ", "  | | ", "   > >", "  | | ", " /_/  " },
    { "  /\\/|", " |/\\/ ", "      ", "      ", "      ", "      " },
};

unsigned short int const lens[95] = {
    5, 4,  6, 11, 6, 7, 9, 4, 5, 5, 7, 8,  4, 8,  4,  7, 8,  4,  8,
    8, 9,  8, 8,  8, 8, 8, 4, 4, 5, 8, 5,  6, 10, 10, 8, 8,  8,  8,
    8, 8,  8, 6,  8, 7, 8, 9, 8, 8, 8, 8,  8, 8,  8,  8, 10, 13, 7,
    8, 7,  5, 7,  5, 5, 8, 4, 8, 8, 7, 8,  7, 6,  8,  8, 4,  6,  7,
    4, 12, 8, 8,  8, 8, 7, 6, 6, 8, 8, 11, 7, 8,  6,  6, 4,  6,  6,
};
