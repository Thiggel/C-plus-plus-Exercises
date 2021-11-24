#include "data.ih"

void Data::swapWordDouble(Data &other)
{
    string tmp{ move(u_word) };                 // save the current object
    u_word.~string();

    for (size_t index = 0; index < 10; ++index) // copy double
        *u_double[index] = *other.u_double[index];

    new(&other.u_word) string{ move(tmp) };     // install at other object

}