#include "parser.ih"

bool Parser::pureDouble(double *dest, std::string const &str)
{
  // save position after conversion to see if all
  // characters of the string were used
  size_t posAfterConversion = 0;

  // try converting
  double temp = std::stod(str, &posAfterConversion);

  // success if all characters were used
  if (posAfterConversion == str.length())
  {
    // save the converted number in the destination
    *dest = temp;

    // check if it is a number, and it doesn't
    // contain '.', 'e' or 'E'
    if (
            str.find('.') == std::string::npos &&
            str.find('e') == std::string::npos &&
            str.find('E') == std::string::npos
            )
      // if so save that it is an integral value
      d_isIntegral = true;

    return true;
  }

  // not all characters were used
  return false;
}