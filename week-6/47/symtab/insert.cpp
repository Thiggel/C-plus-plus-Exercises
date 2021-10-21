#include "symtab.ih"

void Symtab::insert(string ident, size_t pos)
{
  if (pos < d_size)                       // item has to be inserted in middle
    shift(pos);                           // or beginning: shift all elements

  d_table[pos] = new Symbol(ident);
  ++d_size;
  resize();                               // resize array if capacity exceeded
}
