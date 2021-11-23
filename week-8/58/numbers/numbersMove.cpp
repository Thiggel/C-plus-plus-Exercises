#include "numbers.ih"

Numbers::Numbers(Numbers &&numbers) noexcept
:
d_count(0),
d_storage(nullptr)
{
    d_count = numbers.d_count;     //copy from original object
    d_storage = numbers.d_storage;

    numbers.d_count = 0;          //release data from original
    numbers.d_storage = nullptr;
}


