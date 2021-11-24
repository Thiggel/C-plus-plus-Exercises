#include "data.ih"

void Data::swap2Double(Data &other)
{
    double *tmp[10];

    for (size_t index = 0; index < 10; ++index)
    {
        *tmp[index] = *other.u_double[index];
        *other.u_double[index] = *u_double[index];
        *u_double[index] = *tmp[index];
    }
}