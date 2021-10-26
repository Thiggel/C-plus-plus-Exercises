#include <iostream>
#include "sort.ih"

void Sort::sort(string **strArrFirstEl, size_t nmemb)
{                                       // wrapper for C-sort-function
    qsort_r(                            // use C-function
        strArrFirstEl,
        nmemb,
        sizeof(string *),
        this,                           // give this class context
        d_compare                       // inject compare function
    );
}