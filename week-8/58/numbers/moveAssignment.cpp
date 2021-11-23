#include "numbers.ih"

Numbers &Numbers::operator=(Numbers &&numbers)  noexcept {

    numbers.swap(*this);
    return *this;
}

