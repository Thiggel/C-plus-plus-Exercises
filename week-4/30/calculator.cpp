#include "calculator.ih"

Calculator::Calculator():
  d_numA(0),                          // initialize variables
  d_numB(0),
  d_isAInt(false),
  d_isBInt(false)
{
    d_parser = Parser();              // initialize parser
}