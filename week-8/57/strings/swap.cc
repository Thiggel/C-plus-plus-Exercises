#include "strings.ih"

void Strings::swap(Strings &other)
{
    ::swap(d_size, other.d_size);
    ::swap(d_capacity, other.d_capacity);
    ::swap(d_str, other.d_str);
}