#include "parser.ih"

string Parser::next()
{
  return d_line.next();       // next substr from line
}