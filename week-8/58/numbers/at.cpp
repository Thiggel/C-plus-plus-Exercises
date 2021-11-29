#include "numbers.ih"

void Numbers::at(size_t index, int value)
{
    if (index > d_count)
    {
        cerr << "Error: index out of bounds" << endl;
        return;
    }

    d_storage[index] = value;
}



