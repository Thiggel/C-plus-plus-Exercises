#include "numbers.ih"

void Numbers::write()
{
    for (int index = 0; index != d_count; ++index)
        cout << d_storage[index] << endl;
}
