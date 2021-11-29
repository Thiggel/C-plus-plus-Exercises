#include "numbers.ih"

Numbers::Numbers(const Numbers &numbers)
:
d_count(numbers.d_count),
d_storage(new int[numbers.d_count])
{
    for (size_t idx = 0; idx != d_count; ++idx)
        d_storage[idx] = numbers.d_storage[idx];
}

