#include "parser.ih"

bool Parser::reset()
{
  // read line and return true if success
  return d_line.getLine();
}