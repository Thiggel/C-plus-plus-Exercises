#ifndef _CHARCOUNT_H_
#define _CHARCOUNT_H_

#include <iostream>
#include "char.h"
#include "action.h"


struct CharCount
{
    struct CharInfo
    {
        Char *ptr = nullptr;
        size_t nCharObj = 0;

        Action locate(const char &c, Char *ptrC);
        void append(char &c, Char **ptrC);
        void insert(char &c, Char **ptrC);
        void increment(Char *ptrC) const;
    };

    CharInfo info;
    size_t count(std::istream &inStream);

};

#endif