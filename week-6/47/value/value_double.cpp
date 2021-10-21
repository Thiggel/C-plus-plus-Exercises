#include "value.ih"

Value::Value(double val = 0)
:
  d_token(DOUBLE),
  u_double(val)
{}