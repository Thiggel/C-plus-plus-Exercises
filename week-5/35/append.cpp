#include "main.ih"

void CharCount::CharInfo::append(char &c, Char **ptrC)
{
    ++nCharObj;
    *ptrC = new Char(c, nullptr);
}