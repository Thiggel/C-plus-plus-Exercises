#include "parser.ih"

std::string Parser::next()
{
  return d_line.next();       // next substr from line
}