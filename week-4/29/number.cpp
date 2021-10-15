#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
  return convert(dest, d_line.next());  // convert next substr to double
}