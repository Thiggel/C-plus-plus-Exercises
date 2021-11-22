#include "data.ih"

void Data::destroy(Data::Field field)
{
    (this->*s_destroy[field])();
}