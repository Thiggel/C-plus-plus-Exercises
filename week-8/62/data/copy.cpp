#include "data.ih"

void Data::copy(Type type, Data &other)
{
    (this->*s_copy[type])(other);
}