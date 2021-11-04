#include "charCount.ih"

CharCount::Char *CharCount::enlarge(Char *old)
{
    d_info.capacity *= 2;
    Char *tmp = rawCapacity();

    for (size_t idx = 0; idx != d_info.nCharObj; ++idx)
    {
        cout << old[idx].ch << endl;
        tmp[idx] = old[idx];
    }


    delete[] old;
    return tmp;
}