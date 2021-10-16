#include "main.ih"

//Extracts user input from istream into Person object
void readData(Person array[], size_t size, istream inStream)
{

    for (size_t count = 0; count < size; ++count)
    {
        cout << '?';
        array[count].extract(inStream);
    }
}
