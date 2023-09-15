#ifndef _FUNCS_H
#define _FUNCS_H

#include <iostream>

extern int  get_split(std::string const        string,
                      unsigned short int const col_size);
extern void get_scream(std::string         &scream,
                       struct winsize const sz,
                       std::string const    string);
extern void args_scream(struct winsize const sz, std::string const string);
extern void inte_scream(struct winsize const sz);

#endif
