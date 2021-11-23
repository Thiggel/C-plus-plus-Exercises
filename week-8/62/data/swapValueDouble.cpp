#include "data.ih"

void Data::swapValueDouble(Data &other)
{
    size_t tmp = u_value;
    u_double = other.u_double;
    other.u_value = tmp;
}