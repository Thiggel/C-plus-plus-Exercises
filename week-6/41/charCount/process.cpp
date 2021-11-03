#include "charCount.ih"

CharCount::Char CharCount::process(char ch)
{
    size_t idx = locate(&idx, ch);

    return (this->*d_CharPtr)(ch);

}