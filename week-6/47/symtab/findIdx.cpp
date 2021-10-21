#include "symtab.ih"

size_t Symtab::findIdx(string ident)
{
  Return search = binarySearch(ident, 0, d_size);

  if (!search.found)                          // no item found
    insert(ident, search.index);              // insert new item

  return search.index;
}