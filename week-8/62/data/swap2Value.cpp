#include "data.ih"

void Data::swap2Value(Data &other)
{
    size_t tmp = u_value;
    u_value = other.u_value;
    other.u_value = tmp;
}