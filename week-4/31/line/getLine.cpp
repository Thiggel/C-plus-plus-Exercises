#include "line.ih"

bool Line::getLine()
{
  // reset the position
  pos = 0;

  // read input line
  if (!std::getline(std::cin, line))
    // abort if not read
    return false;

  // Loop for each character in string
  for (char index : line)
    // Return true if ws-char is found
    if (!std::isspace(index))
      return true;

  // Return false otherwise
  return false;
}