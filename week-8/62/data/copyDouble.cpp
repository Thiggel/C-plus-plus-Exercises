#include "data.ih"

void Data::copyDouble(Data const &other)
{
    for (size_t index = 0; index < 10; ++index)
        *u_double[index] = *other.u_double[index];
}