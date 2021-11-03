#include "charCount.ih"

CharCount::CharIndex CharCount::inc(CharIndex chi)
{
    ++d_info.ptr[chi.idx].count;
    return chi;
}