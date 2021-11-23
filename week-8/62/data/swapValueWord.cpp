#include "data.ih"

void Data::swapValueWord(Data &other)
{
    size_t tmp = u_value;                      // save the current object

    new(&u_word) string{ move(other.u_word) }; // install other object

    other.u_word.~string();                    // properly destroy object

    other.u_value = tmp;                       // install at other
}