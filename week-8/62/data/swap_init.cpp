#include "data.ih"

void (Data::*s_swap[][3])(Data &other) =
{
    { &Data::swap2Double, &Data::swapDoubleWord, &Data::swapDoubleValue },
    { &Data::swapWordDouble, &Data::swap2Word, &Data::swapWordValue },
    { &Data::swapValueDouble, &Data::swapValueWord, &Data::swap2Value }
};
