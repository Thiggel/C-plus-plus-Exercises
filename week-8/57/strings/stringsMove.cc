#include "strings.ih"

Strings::Strings(Strings &&other) noexcept
:
Strings()
{
    other.swap(*this);
}