#include "numbers.ih"

Numbers::Numbers(Numbers &&numbers) noexcept
:
d_count(0),
d_storage(nullptr)
{
    numbers.swap(*this);
}


