#include "main.ih"

void CharCount::CharInfo::insert(char &c, Char **ptrC)
{
    ++nCharObj;
    *ptrC = new Char(c, *ptrC);
}

