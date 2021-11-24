#include "data.ih"

void Data::swapDoubleValue(Data &other)
{
    size_t tmp = other.u_value;

    for (size_t index = 0; index < 10; ++index)     // copy double
        *other.u_double[index] = *u_double[index];

    u_value = tmp;
}