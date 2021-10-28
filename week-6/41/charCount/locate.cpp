#include "charCount.ih"

CharCount::Action CharCount::locate(size_t *destIdx, char ch) const
{
    // caveat: the cast is required to
    // negative char values from being
    // converted to very high size_t values
    for (
            size_t idx = 0, uCh = static_cast<unsigned char>(ch);
            idx != d_info.nCharObj;         // inspect all available chars
            ++idx
            )
    {
        size_t available = static_cast<unsigned char>(
                d_info.ptr[idx].ch
        );

        // find the position of uCh in
        // the set of available chars

        if (uCh > available)                // uCh is maybe later in the set
            continue;

        *destIdx = idx;                     // uCh's index is found

        return uCh == available ?           // if uCh is at idx, then
               INC                     // increment its freq. count
                                :
               INSERT;                 // otherwise insert it at idx as
        // a new character.
    }

    // uCh wasn't there yet, so it's
    return APPEND;                      // appended at the end
}

