#include "parser.ih"

bool Parser::isIntegral()
{
  // return true if last read number is
  // integral
  return d_isIntegral;
}