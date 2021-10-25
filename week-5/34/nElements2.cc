#include "CopyCat.ih"

size_t CopyCat::nElements(char const *const *array)
{
    size_t nElements = 0;

    while (array[nElements])    // count the rows of the 2D array
        ++nElements;

    return nElements;
}