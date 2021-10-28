#include "charCount.ih"


void CharCount::append(char ch)     // in fact:insert at the end,
{                                   //  at d_nfo.nCharObj
    insert(ch, d_info.nCharObj);
}