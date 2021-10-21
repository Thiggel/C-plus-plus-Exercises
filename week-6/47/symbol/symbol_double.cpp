#include "symbol.ih"

Symbol::Symbol(string name, double val)
:
  d_name(name),
  d_value(Value(val))
{}