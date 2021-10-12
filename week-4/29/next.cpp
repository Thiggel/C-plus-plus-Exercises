#include "parser.ih"

std::string Parser::next()
{
  // return next substring from input
  return d_line.next();
}