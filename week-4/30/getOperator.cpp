#include "calculator.ih"

// returns true if the next line element is a valid operator
bool Calculator::getOperator()
{
  // save operator in sign variable
  sign = parser.next().at(0);

  // return whether it is a valid operator
  return
    sign == '+' ||
    sign == '-' ||
    sign == '*' ||
    sign == '/' ||
    sign == '%';
}