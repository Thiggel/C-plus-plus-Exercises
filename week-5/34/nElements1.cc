#include "CopyCat.ih"

size_t CopyCat::nElements(char const *array){
    size_t elementCounter = 0;

    for (int index = 0; array[index] != '\0' ; ++index) {
        elementCounter++;    // keep track of size of array
    }

    return elementCounter;
}