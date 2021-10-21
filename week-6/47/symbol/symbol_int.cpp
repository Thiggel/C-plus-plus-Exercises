#include "symbol.ih"

Symbol::Symbol(string name, int val)
:
  d_name(name),
  d_value(Value(val))
{}