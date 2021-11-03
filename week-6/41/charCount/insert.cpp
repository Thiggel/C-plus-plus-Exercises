#include "charCount.ih"

CharCount::CharIndex CharCount::insert(CharIndex chi)
{
    if (d_info.ptr == 0)
    {
        d_info.ptr = new Char[d_info.capacity];
    }

    if (d_info.capacity == d_info.nCharObj)
    {
        d_info.ptr = enlarge(d_info.ptr);
    }

    transfer(d_info.ptr, chi.idx, d_info.capacity);

    d_info.ptr[chi.idx] = Char{ chi.ch, 1 };

    ++d_info.nCharObj;               // added new element

    return chi;
}
