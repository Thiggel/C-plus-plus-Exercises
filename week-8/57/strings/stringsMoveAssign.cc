#include "strings.ih"

Strings &Strings::operator=(Strings &&other) noexcept
{
    other.swap(*this);
    return *this;
}