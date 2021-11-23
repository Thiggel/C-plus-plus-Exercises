#include "numbers.ih"

Numbers &Numbers::operator=(Numbers const &numbers) {

    if (this != &numbers)
    {
        delete[] d_storage;   //Free existing memory before copying

        d_count = numbers.d_count;
        d_storage = new int[d_count];
        copy(numbers.d_storage, numbers.d_storage + d_count, d_storage);
    }
    return *this;
}