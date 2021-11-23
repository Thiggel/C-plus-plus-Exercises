#include "strings.ih"

void Strings::copy(Strings const &other)
{
    std::copy(other.d_str, other.d_str + this->d_size, this->d_str);
}