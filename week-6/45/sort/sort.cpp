#include "sort.ih"

void Sort::sort(string **strArrFirstEl, size_t nmemb)
{
  qsort(*strArrFirstEl, nmemb, sizeof(string *), d_compare);
}