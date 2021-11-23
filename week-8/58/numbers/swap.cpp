#include "numbers.ih"

void Numbers::swap(Numbers &other)
{
    ::swap(d_storage, other.d_storage);
    ::swap(d_count, other.d_count);
}