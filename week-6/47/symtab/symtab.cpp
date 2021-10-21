#include "symtab.ih"

Symtab::Symtab()
:
  d_capacity(8),
  d_size(0)
{
  d_table = static_cast<Symbol **>(                 // allocate initial memory
    operator new(d_capacity * sizeof(Symbol *))
  );
}