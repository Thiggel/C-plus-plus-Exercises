#include "value.ih"

int Value::intValue()
{
  if (d_token != INT)               // wrong type requested
  {
    cerr << "Call of function charValue: Value type is not int\n";
    exit(EXIT_FAILURE);
  }

  return u_int;
}