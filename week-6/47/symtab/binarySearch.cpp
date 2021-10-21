#include "symtab.ih"

Symtab::Return Symtab::binarySearch(string el, size_t begin, size_t end)
{
  if (begin == end)                                   // item not found
    return {
      .found = false,
      .index = end                                    // insert at this index
    };

  size_t mid = begin + (end - begin) / 2;

  SymbolOrder order = d_table[mid]->compare(el);

  if (order == LHS_FIRST)                             // may be in right half
    return binarySearch(el, mid + 1, end);
  else if (order == RHS_FIRST)                        // may be in left have
    return binarySearch(el, begin, mid);

  return {
    .found = true,
    .index = mid                                      // found at this index
  };
}