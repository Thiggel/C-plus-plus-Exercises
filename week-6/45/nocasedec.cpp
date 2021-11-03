#include "main.ih"

int nocasedec(const void *ptrA, const void *ptrB)
{                       // compare strings decreasingly and case-insensitively
    string strA = tolowercase(**reinterpret_cast<string *const *>(ptrA));
    string strB = tolowercase(**reinterpret_cast<string *const *>(ptrB));

    if (strA > strB)
        return -1;

    else if (strA < strB)
        return 1;

    return 0;
}