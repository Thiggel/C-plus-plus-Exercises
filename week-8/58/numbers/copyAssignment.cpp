#include "numbers.ih"

Numbers &Numbers::operator=(Numbers const &numbers)
{
    if (this != &numbers)
    {
        Numbers tmp(numbers);
        swap(tmp);
    }
    return *this;
}
