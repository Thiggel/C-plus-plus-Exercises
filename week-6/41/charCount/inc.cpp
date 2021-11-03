#include "charCount.ih"

void CharCount::inc(char c, size_t idx) const
{
    ++d_info.ptr[idx].count;
}