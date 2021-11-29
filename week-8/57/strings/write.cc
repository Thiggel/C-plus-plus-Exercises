#include "strings.ih"

void Strings::write()
{
    for (size_t idx = 0; idx != d_size; ++idx)
        cout << at(idx) << " ";

    cout << endl;
}