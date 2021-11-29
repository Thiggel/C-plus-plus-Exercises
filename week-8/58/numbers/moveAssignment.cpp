#include "numbers.ih"

Numbers &Numbers::operator=(Numbers &&numbers)  noexcept
{
    swap(numbers);
    return *this;
}