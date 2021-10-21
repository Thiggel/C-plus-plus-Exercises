#include "value.ih"

Value::Value(size_t index, Token type)
:
  d_token(type),
  u_int(index)
{}