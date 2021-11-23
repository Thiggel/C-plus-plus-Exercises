#include "data.ih"

void Data::swap2Double(Data &other)
{
    double *tmp[10] = u_double;
    u_double = other.u_double;
    other.u_double = tmp;
}