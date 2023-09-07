#ifndef _FUNCS_H
#define _FUNCS_H

extern int  get_split(char const *string, unsigned short int const col_size);
extern void nc_scream(struct winsize const sz, char const *string);
extern void c_scream(struct winsize const sz);

#endif
