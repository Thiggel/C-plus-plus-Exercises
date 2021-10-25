#include "CopyCat.ih"

char **CopyCat::duplicate(const char *const *array)
{
    size_t size = nElements(array);              // get size of array (rows)
    char **duplicatedArray = new char*[size];    // create new array to fill later

    for (size_t index = 0; index < size; ++index)
    {
        size_t arrLength = nElements(array[index]);  //get length of the row
        duplicatedArray[index] = ntbsCopy(array[index], arrLength); // copy array of index into new array
    }

    return duplicatedArray;
}