#include "symbol.ih"

Token Symbol::type()
{
  return d_value.token();
}