#include "symbol.ih"

SymbolOrder Symbol::compare(string ident)
{
  return  d_name < ident ? LHS_FIRST :    // this symbol comes after ident sym
          d_name > ident ? RHS_FIRST :    // it comes before
          EQUAL;
}