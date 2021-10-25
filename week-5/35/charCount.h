#ifndef _CHARCOUNT_H_
#define _CHARCOUNT_H_

#include <iostream>
#include "char.h"
#include "action.h"


struct CharCount
{
    struct CharInfo
    {
        struct Char *ptr = nullptr;
        size_t nCharObj = 0;

        Action locate(char const &c);
        void append();
        void insert(char c, Char *ptr);
        static void increment(Char *ptr);
    };

    CharInfo info;
    size_t count(std::istream &inStream);


};




#endif