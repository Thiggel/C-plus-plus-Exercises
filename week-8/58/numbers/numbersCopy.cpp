#include "numbers.ih"

Numbers::Numbers(const Numbers &numbers)
:
d_count(numbers.d_count),
d_storage(numbers.d_storage)
{
    copy(numbers.d_storage, numbers.d_storage + d_count, d_storage);
}

