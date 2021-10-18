#include "calculator.ih"

void Calculator::evaluate()                 // perform requested computation
{
  if (d_sign == "+")
    add();
  else if (d_sign == "-")
    subtract();
  else if (d_sign == "*")
    multiply();
  else if (d_sign == "/")
    divide();
  else if (d_sign == "%")
    modulo();
}