#include "charCount.ih"


CharCount::CharIndex CharCount::append(CharIndex chi)     // in fact:insert at the end,
{                                   //  at d_nfo.nCharObj
    chi.idx = d_info.nCharObj;
    insert(chi);
    return chi;
}

