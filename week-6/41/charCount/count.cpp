#include "charCount.ih"

size_t CharCount::count(istream &in)
{

    size_t nCharObjs = 0;

    char ch;

    CharIndex (CharCount::*s_CharPtr[])(CharIndex chi) =
    {
            &CharCount::insert,
            &CharCount::append,
            &CharCount::inc
    };

    while (in.get(ch))                  // retrieve all chars from 'in'
    {
        ++nCharObjs;
        d_CharPtr(s_CharPtr[ch]);
        process(ch);
    }

    return nCharObjs;
}
