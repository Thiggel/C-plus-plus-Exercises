#include "charCount.ih"

CharCount::Char *CharCount::enlarge(Char *old) const
{
    Char *tmp = new Char[d_info.capacity * 2];

    for (size_t idx = 0; idx != d_info.nCharObj; ++idx)
        tmp[idx] = old[idx];

    delete[] old;
    return tmp;
}