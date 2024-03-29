#include "parser.ih"

Parser::Return Parser::convert(double *dest, string const &str)
try
{
  return pureDouble(dest, str) ? NUMBER : NO_NUMBER;
}
// conversion failed
catch (const exception& e)
{
  return NO_NUMBER;
}