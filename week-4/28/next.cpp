#include "line.ih"

string Line::next()
{
  if (d_pos == string::npos)                  // no substring left
    return "";                                // return empty string

  size_t firstWS =
    d_line.find_first_of("\t\n ", d_pos);  // find first whitespace

  string subStr = d_line.substr(              // compute substring
    d_pos,                                    // from current pos in line
    firstWS - d_pos                         // up to whitespace
  );

  d_pos = d_line.find_first_not_of(
    "\t\n ", firstWS                        // next word starts after WS
  );

  if (d_pos >= d_line.length())               // when line ends
    d_pos = string::npos;                     // set pos to npos

  return subStr;                              // return new substring
}