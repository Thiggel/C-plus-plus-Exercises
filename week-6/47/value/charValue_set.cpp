#include "value.ih"

void Value::charValue(char val)
{
  d_token = CHAR;
  u_char = val;
}