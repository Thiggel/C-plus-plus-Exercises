#include "symtab.ih"

void Symtab::destroy()
{
  delete[] d_table;
}