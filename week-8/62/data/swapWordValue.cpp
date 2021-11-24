#include "data.ih"

void Data::swapWordValue(Data &other)
{
    string tmp{ move(u_word) };                 // save the current object
    u_word.~string();

    u_value = other.u_value;

    new(&other.u_word) string{ move(tmp) };     // install at other object

}