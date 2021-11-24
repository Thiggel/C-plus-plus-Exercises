#include "data.ih"

void Data::swapValueDouble(Data &other)
{
    size_t tmp = u_value;

    for (size_t index = 0; index < 10; ++index)
        *u_double[index] = *other.u_double[index];

    other.u_value = tmp;
}