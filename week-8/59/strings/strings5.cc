#include "strings.ih"

Strings::Strings(size_t nIterate, bool copy = true)
:
    d_size(0),
    d_str(0),
    d_enlarge(copy ? &Strings::enlargeByCopy : &Strings::enlargeByMove)
{
}
