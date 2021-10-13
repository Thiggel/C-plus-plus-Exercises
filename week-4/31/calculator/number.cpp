#include "calculator.ih"

// parse the next line element as a number
bool Calculator::number(double *dest, bool *isInt)
{
  // get next substring, save in dest and return type
  Parser::Return type = parser.number(dest);
  // save whether it is integral
  *isInt = parser.isIntegral();
  // return whether it is a valid number
  return type == Parser::NUMBER;
}