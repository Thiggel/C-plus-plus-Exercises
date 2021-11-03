#include "charCount.ih"

void CharCount::transfer(Char *ptr, size_t begin, size_t end)
{
    for (; begin != end; ++begin)           // transfer Char objects
    {
        ptr[begin] = ptr[begin - 1];

    }

}