#include "data.ih"

void Data::copy(Type type, Data const &other)
{
    void (Data::*s_copy[])(Data const &other) =
    {
        &Data::copyDouble,
        &Data::copyWord,
        &Data::copyValue
    };

    (this->*s_copy[type])(other);
}