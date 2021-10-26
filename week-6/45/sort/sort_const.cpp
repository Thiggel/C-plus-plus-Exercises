#include "sort.ih"

Sort::Sort(int (*compare)(void *obj, const void*, const void*))
:
  d_compare(compare)
{}