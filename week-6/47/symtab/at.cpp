#include "symtab.ih"

Symbol& Symtab::at(size_t index)
{
  return *d_table[index];
}