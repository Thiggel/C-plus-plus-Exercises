#include "data.ih"

void (Data::*s_destroy[])() =
{
    &Data::destroyDouble,
    &Data::destroyWord,
    &Data::cdestroyValue
};