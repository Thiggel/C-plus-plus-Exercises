#include "CopyCat.ih"

CopyCat::CopyCat(char **data)    // constructor that uses data array
{
    d_size = nElements(data);
    d_data = duplicate(data);
}