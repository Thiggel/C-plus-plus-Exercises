#include "data.ih"

void Data::swapDoubleWord(Data &other)
{
    double *tmp[10] = u_double;                     // save the current object

    new(&u_word) string{ move(other.u_word) }; // install other object

    other.u_word.~string();                    // properly destroy object

    other.u_double = tmp;                      // install at other
}