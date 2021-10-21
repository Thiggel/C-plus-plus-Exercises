#include "value.ih"

double Value::doubleValue()
{
  if (d_token != DOUBLE)        // wrong type requested
  {
    cerr << "Call of function charValue: Value type is not double\n";
    exit(EXIT_FAILURE);
  }

  return u_double;
}