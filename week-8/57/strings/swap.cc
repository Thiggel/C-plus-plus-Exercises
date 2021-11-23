#include "strings.ih"

void Strings::swap(Strings const &other)
{
    copy(other.d_str, other.d_str + this->d_size, this->d_str);
}