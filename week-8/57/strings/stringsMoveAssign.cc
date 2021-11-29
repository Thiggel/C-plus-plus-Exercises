#include "strings.ih"

Strings &Strings::operator=(Strings &&other) noexcept
{
    swap(other);
    return *this;
}