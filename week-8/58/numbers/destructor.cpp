#include "numbers.ih"

Numbers::~Numbers()
{
    if (d_storage != nullptr)
        delete[] d_storage;
}
