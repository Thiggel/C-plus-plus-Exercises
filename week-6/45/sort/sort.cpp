#include "sort.ih"

void Sort::sort(string **strArrFirstEl, size_t nmemb)
{
    qsort_r(*strArrFirstEl, nmemb, sizeof(string *), this, d_compare);
}