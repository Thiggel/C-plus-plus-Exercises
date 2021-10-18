#include "calculator.ih"

bool Calculator::number(double *dest, bool *isInt)  // parse next line el as
{                                                   // a number
  Parser::Return type = d_parser.number(dest);      // next substr
  *isInt = d_parser.isIntegral();                   // save whether integral
  return type == Parser::NUMBER;                    // return whether number
}