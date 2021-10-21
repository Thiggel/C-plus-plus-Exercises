#include "value.ih"

void Value::doubleValue(double val)
{
  d_token = DOUBLE;
  u_double = val;
}