#include "symtab.ih"

Symtab::~Symtab()
{
  delete[] d_table;
}