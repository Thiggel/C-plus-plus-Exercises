#include "sort.ih"

Sort::Sort(int (*compare)(const void *strA, const void *strB))
:
  d_compare(compare)
{}