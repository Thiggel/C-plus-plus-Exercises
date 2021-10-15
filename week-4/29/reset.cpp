#include "parser.ih"

bool Parser::reset()
{
  return d_line.getLine();        // read line + return true if success
}