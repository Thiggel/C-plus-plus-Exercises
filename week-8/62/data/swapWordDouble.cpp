#include "data.ih"

void Data::swapWordDouble(Data &other)
{
    string tmp{ move(u_word) };                 // save the current object

    u_double = other.u_double;

    new(&other.u_word) string{ move(tmp) };     // install at other object

}