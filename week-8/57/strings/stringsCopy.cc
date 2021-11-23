#include "strings.ih"

Strings::Strings(Strings const &other)
:
Strings()
{
    copy(other);
}