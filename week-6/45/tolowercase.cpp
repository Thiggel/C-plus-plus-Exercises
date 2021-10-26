#include "main.ih"

string tolowercase(string str)
{                               // comvert string to lower case
    for (size_t index = 0; index < str.length(); ++index)
        str[index] = tolower(str[index]);

    return str;
}