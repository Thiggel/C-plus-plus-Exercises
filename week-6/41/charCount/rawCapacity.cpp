#include "charCount.ih"

CharCount::Char CharCount::rawCapacity()
{
    Char *ptr = static_cast<Char *>(operator new(d_info.capacity * sizeof(Char)));
    return *ptr;
}

