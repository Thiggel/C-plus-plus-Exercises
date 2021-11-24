#include "data.ih"

Data::Data(double *const num[10])
{
    for (size_t index = 0; index < 10; ++index)
        *u_double[index] = *num[index];
}