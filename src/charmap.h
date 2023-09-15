#ifndef _CHARMAP_H_
#define _CHARMAP_H_

#define NUM_CHARS   95
#define CHAR_HEIGHT 6

#include <iostream>

extern std::string const        map[NUM_CHARS][CHAR_HEIGHT];
extern unsigned short int const lens[NUM_CHARS];

#endif
