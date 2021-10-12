#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
  // try converting next substring to double
  return convert(dest, d_line.next());
}