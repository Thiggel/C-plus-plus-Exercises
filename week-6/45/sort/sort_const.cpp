#include "sort.ih"

Sort::Sort(int (*compare)(const void*, const void*))
:
  d_compare(compare)
{}