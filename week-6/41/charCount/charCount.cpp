#include "charCount.ih"

CharCount::CharCount(char ch)
{
    switch(size_t idx; locate(&idx, ch))
    {
        case APPEND:
            d_CharPtr = &CharCount::append;
            break;
        case INC:
            d_CharPtr = &CharCount::inc;
            break;
        case INSERT:
            d_CharPtr = &CharCount::insert;
            break;
    }
}
