#include "../26/person.ih"

//Inserts information from Person to ostream
void writeData(Person array[], size_t size)
{
    for(int count = 0; count < size; count++)
    {
        Person::insert(array[count]);
    }
}