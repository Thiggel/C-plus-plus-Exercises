#include "parser.ih"

bool Parser::pureDouble(double *dest, std::string const &str)
{
  size_t convPos = 0;                   // save position after conversion

  double temp = std::stod(              // try converting
    str,
    &convPos                            // save pos to see if all characters
  );                                    // were used


  if (convPos == str.length())          // if all characters were used
  {
    *dest = temp;                       // save conv. number to destination

    d_isIntegral =
      str.find_first_of(".eE")      // if there is ., e, E in str
      == std::string::npos;            // then its not integral

    return true;
  }

  return false;                       // not all characters were used
}