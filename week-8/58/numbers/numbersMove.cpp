#include "numbers.ih"

Numbers::Numbers(Numbers &&numbers) noexcept
:
d_count(numbers.d_count),
d_storage(numbers.d_storage)
{
    numbers.d_count = 0;
    numbers.d_storage = 0;
}


