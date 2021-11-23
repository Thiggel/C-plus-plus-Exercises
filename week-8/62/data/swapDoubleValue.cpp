#include "data.ih"

void Data::swapDoubleValue(Data &other)
{
    double *tmp[10] = u_double;
    u_value = other.u_value;
    other.u_double = tmp;
}