#include "charCount.ih"

void CharCount::insert(char ch, size_t idx)
{
    // room for a newly encountered character
    // is required: nCharObj + 1 elements
    Char *ptr = new Char[d_info.nCharObj + 1];

    transfer(ptr, 0, idx);          // transfer d_info.ptr[0..idx] to ptr[0]

    ptr[idx] = Char{ ch, 1 };       // insert the new element

    // transfer the rest
    transfer(ptr + idx + 1, idx, d_info.nCharObj);

    delete[] d_info.ptr;            // delete garbage memory

    ++d_info.nCharObj;                 // added new element
    d_info.ptr = ptr;               // point at the new Char array
}
