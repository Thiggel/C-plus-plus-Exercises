#include "data.ih"

void (Data::*s_swap[][3])(Data &other) =
{
    { &Data::swap2Double, &Data::swapDoubleWord, &Data::swapDoubleValue },
    { &Data::swap2Word, &Data::swapWordDouble, &Data::swapWordValue },
    { &Data::swap2Value, &Data::swapValueDouble, &Data::swapValueWord }
};
