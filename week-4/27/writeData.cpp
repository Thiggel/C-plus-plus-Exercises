#include "main.ih"

//Inserts information from Person to ostream
void writeData(Person array[], size_t size, ostream &outStream)
{
    for (size_t count = 0; count < size; ++count)
        array[count].insert(outStream);
}
