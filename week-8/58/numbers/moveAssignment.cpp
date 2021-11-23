#include "numbers.ih"

Numbers &Numbers::operator=(Numbers &&numbers)  noexcept {
    if (this != &numbers)
    {
        delete[] d_storage;

        d_count = numbers.d_count;     //copy from original object
        d_storage = numbers.d_storage;

        numbers.d_count = 0;          //release data from original
        numbers.d_storage = nullptr;
    }
    return *this;
}

