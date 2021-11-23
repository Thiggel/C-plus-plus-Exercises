#include "strings.ih"

Strings::Strings(Strings &&other) noexcept
:
Strings()
{
    d_size = other.d_size;
    d_capacity = other.d_capacity;
    d_str = other.d_str;

    other.d_size = 0;
    other.d_capacity = 0;
    other.d_str = nullptr;
}