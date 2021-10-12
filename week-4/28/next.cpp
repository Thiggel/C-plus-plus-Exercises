#include "line.ih"

std::string Line::next()
{
  // no substring left
  if (pos == std::string::npos)
    // return empty string
    return "";

  // set substring empty
  subStr = "";

  // until next space
  while (
          std::isalnum(line[pos]) ||
          std::ispunct(line[pos])
          )
  {
    // add characters to subStr
    subStr += line[pos];
    // remove character from line
    ++pos;
  }

  // go to next start of word
  while (std::isspace(line[pos]))
    ++pos;

  // set pos to -1 when line ends
  if (pos >= (line.length() - 1))
    pos = std::string::npos;

  // return new substring
  return subStr;
}