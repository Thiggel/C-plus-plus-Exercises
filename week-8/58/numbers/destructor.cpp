#include "numbers.ih"

Numbers::~Numbers()
{
    delete[] d_storage;
}
