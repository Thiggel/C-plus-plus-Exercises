#include "symtab.ih"

void Symtab::resize()
{
  if (d_capacity > d_size)                            // check if resize
    return;                                           // necessary

  size_t newCapacity = d_capacity * 2;

  Symbol **newTable = static_cast<Symbol **>(
    operator new(newCapacity * sizeof(Symbol *))
  );                                                  // allocate new memory

  memcpy(                                             // copy to new location
    newTable,
    d_table,
    d_capacity * sizeof(Symbol *)
  );
  destroy();                                          // deallocate old memory

  d_capacity = newCapacity;
  d_table = newTable;
}