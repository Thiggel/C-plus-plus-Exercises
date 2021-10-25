#include "CopyCat.ih"

char *CopyCat::ntbsCopy(const char *array, size_t size)
{
    char *copyArray = new char[size];        // create new array to fill with passed size

    for (size_t index = 0; index < size; ++index)
        copyArray[index] = array[index];     // copy elements into new array

    return copyArray;
}