#include "value.ih"

void Value::intValue(int val)
{
  d_token = INT;
  u_int = val;
}