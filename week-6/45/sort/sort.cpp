#include <iostream>
#include "sort.ih"

void Sort::sort(string **strArrFirstEl, size_t nmemb)
{                                       // wrapper for C-sort-function
    qsort(                              // use C-function
        strArrFirstEl,
        nmemb,
        sizeof(string *),
        d_compare                       // inject compare function
    );
}