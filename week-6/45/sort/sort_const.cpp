#include "sort.ih"

Sort::Sort(int (*compare)(void*, const void*, const void*))
:
  d_compare(compare)
{}