#include "charCount.ih"

void CharCount::process(char ch)
{
    CharIndex chi{};
    chi.ch = ch;

    switch (locate(&chi.idx, chi.ch))
    {
        case APPEND:
            append(chi);
            break;

        case INSERT:
            insert(chi);            // insert new entry at index `idx'
            break;

        case INC:
            inc(chi);
            break;
    }
}