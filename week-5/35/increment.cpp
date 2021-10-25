#include "main.ih"

void CharCount::CharInfo::increment(Char *ptr)
{
    ++(ptr->d_count);
}


