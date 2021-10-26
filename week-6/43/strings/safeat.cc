#include "strings.ih"
#include <iostream>

namespace {
    string emptyString;
}

std::string &Strings::safeAt(size_t idx) const
{
    if (idx >= d_size)
    {
        cout << "uwhudw" << emptyString;

        emptyString.clear();
        return emptyString;
    }

    return d_str[idx];
}
