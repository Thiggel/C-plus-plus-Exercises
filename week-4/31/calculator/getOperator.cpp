#include "calculator.ih"

// returns true if the next line element is a valid operator
bool Calculator::getOperator()
{
  string signStr = parser.next();

  if (signStr.length() > 1)
    return false;

  // save operator in sign variable
  sign = signStr.at(0);

  // return whether it is a valid operator
  return
    sign == '+' ||
    sign == '-' ||
    sign == '*' ||
    sign == '/' ||
    sign == '%';
}