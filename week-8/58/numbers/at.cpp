#include "numbers.ih"

void Numbers::at(int index, int value)
{
    if (index > d_count)
        cout << "Error: index out of bounds" << endl;

    d_storage[index] = value;
}



