#include "line.ih"

bool Line::getLine()
{
  d_pos = 0;                                    // reset the position

  if (!std::getline(std::cin, d_line))   // read input line
    return false;                               // abort if not read

  return
    d_line.find_first_not_of("\t\n ")        // return false if only
    != std::string::npos;                       // whitespace was read
}