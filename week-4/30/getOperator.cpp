#include "calculator.ih"

bool Calculator::getOperator()      // true if next line el is valid operator
{
  d_sign = d_parser.next();

  return                            // return whether it is a valid operator
    d_sign == "+" ||
    d_sign == "-" ||
    d_sign == "*" ||
    d_sign == "/" ||
    d_sign == "%";
}