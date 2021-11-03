#include "charCount.ih"

size_t CharCount::count(istream &in)
{

    size_t nCharObjs = 0;

    char ch;

    while (in.get(ch))                  // retrieve all chars from 'in'
    {
        ++nCharObjs;
        process(ch);                    // add ch to the set of characters
    }

    return nCharObjs;
}
