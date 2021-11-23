#include "data.ih"

void Data::swap2Word(Data &other)
{
    string tmp{ move(u_word) };                     // save the current object
    u_word.~string();                               // properly destroy it

    new(&u_string) string{ move(other.u_word) };    // install other object
    other.u_word.~string();                         // properly destroy other

    new(&other.u_string) string{ move(tmp) };       // install original
}