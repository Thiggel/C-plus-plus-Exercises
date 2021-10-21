#include "symtab.ih"

Symbol& Symtab::find(string ident)
{
  return at(findIdx(ident));  // get element at index of ident
}