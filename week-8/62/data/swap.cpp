#include "data.ih"

void Data::swap(Type current, Data &other, Type next)
{
    (this->*s_swap[current][next])(other);
}