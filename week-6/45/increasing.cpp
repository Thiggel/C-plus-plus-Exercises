#include "main.ih"

int increasing(const void *ptrA, const void *ptrB)
{                                   // compare strings in increasing order
    string strA = **reinterpret_cast<string *const *>(ptrA);
    string strB = **reinterpret_cast<string *const *>(ptrB);

    if (strA < strB)
        return -1;

    else if (strA > strB)
        return 1;

    return 0;
}