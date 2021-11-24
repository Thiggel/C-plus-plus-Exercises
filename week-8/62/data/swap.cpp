#include "data.ih"

void Data::swap(Type current, Data &other, Type next)
{
    void (Data::*s_swap[][3])(Data &other) =
    {
        { &Data::swap2Double, &Data::swapDoubleWord, &Data::swapDoubleValue },
        { &Data::swapWordDouble, &Data::swap2Word, &Data::swapWordValue },
        { &Data::swapValueDouble, &Data::swapValueWord, &Data::swap2Value }
    };

    (this->*s_swap[current][next])(other);
}