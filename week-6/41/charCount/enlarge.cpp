#include "charCount.ih"

CharCount::Char *CharCount::enlarge(Char *old) const
{
    d_info.capacity *= 2;
    Char *tmp = rawCapacity();

    for (size_t idx = 0; idx != d_info.nCharObj; ++idx)
        tmp[idx] = old[idx];

    delete[] old;
    return tmp;
}