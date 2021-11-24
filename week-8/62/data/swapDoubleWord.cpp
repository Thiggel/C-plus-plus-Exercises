#include "data.ih"

void Data::swapDoubleWord(Data &other)
{
    string tmp{ move(other.u_word) };               // save temporarily
    other.u_word.~string();

    for (size_t index = 0; index < 10; ++index)     // copy double
        *other.u_double[index] = *u_double[index];

    new(&u_word) string{ move(tmp) };               // copy word
}