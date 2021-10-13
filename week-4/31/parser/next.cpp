#include "parser.ih"

std::string Parser::next()
{
  // reset integral
  d_isIntegral = false;

  // return next substring from input
  return d_line.next();
}