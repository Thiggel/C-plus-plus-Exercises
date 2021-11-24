#include "data.ih"

void Data::destroy(Type type)
{
    void (Data::*s_destroy[])() =
    {
        &Data::destroyDouble,
        &Data::destroyWord,
        &Data::destroyValue
    };

    (this->*s_destroy[type])();
}