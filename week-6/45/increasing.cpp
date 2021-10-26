#include "main.ih"

int increasing(void *obj, const void *voidA, const void *voidB)
{
    const string strA = *reinterpret_cast<const string *>(voidA);
    const string strB = *reinterpret_cast<const string *>(voidB);

    cout << strA << " " << strB << endl;

    return  strA > strB ? 1 :
            strA < strB ? -1 :
            0;
}