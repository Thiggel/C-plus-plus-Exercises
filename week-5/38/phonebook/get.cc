#include "main.ih"

string const *PhoneBook::get(string const &key) const
{
    Finder::Pair const *pair = s_finder.get(key);
    return pair == 0 ? 0 : &pair->value;
}



