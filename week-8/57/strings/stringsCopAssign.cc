#include "strings.ih"

Strings &Strings::operator=(Strings const &other)
{
    if (this != &other)
    {
        delete[] d_str;

        d_capacity = other.d_capacity;
        d_size = other.d_size;
        d_str = rawStrings(other.d_size);

        swap(other);
    }

    return *this;
}