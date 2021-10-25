#ifndef _CHAR_H_
#define _CHAR_H_

#include <iostream>

struct Char
{
    char d_ch;
    size_t d_count = 0;

    Char();
    Char(char ch);
};

#endif