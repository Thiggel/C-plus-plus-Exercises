#include "charCount.ih"

size_t CharCount::count(istream &in)
{
    size_t nCharObjs = 0;
    char ch;
    d_info.ptr = rawCapacity();

    while (in.get(ch))                  // retrieve all chars from 'in'
    {
        ++nCharObjs;
        process(ch);
    }

    return nCharObjs;
}
