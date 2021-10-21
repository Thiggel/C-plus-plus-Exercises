#include "value.ih"

char Value::charValue()
{
  if (d_token != CHAR)          // wrong type requested
  {
    cerr << "Call of function charValue: Value type is not char\n";
    exit(EXIT_FAILURE);
  }

  return u_char;
}