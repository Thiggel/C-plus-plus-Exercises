#include "symtab.ih"

void Symtab::shift(size_t pos)
{
  for (size_t index = d_size; index > pos; --index) // start from end
    d_table[index] = d_table[index - 1];            // and shift each el right
}