#include "../26/person.ih"
#include <iostream>

//Extracts user input from istream into Person object
void readData(Person array[], size_t size)
{

    for(int count = 0; count < size; count++)
    {
        std::cout << "?";
        array[count].extract();
    }
}
