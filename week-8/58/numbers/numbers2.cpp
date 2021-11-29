#include "numbers.ih"

Numbers::Numbers(size_t count, int value)
:
d_count(count),
d_storage(new int[count])
{
    for(size_t index = 0; index != count; ++index)
        d_storage[index] = value;
}

