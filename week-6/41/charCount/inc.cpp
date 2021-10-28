#include "charCount.ih"

void CharCount::inc(size_t idx)
{
    ++d_info.ptr[idx].count;
}