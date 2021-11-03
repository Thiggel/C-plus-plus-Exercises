#include "charCount.ih"


void CharCount::append(char ch, size_t idx)     // in fact:insert at the end,
{                                   //  at d_nfo.nCharObj
    insert(ch, d_info.nCharObj);
}

