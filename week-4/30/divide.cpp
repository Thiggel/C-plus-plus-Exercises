#include "calculator.ih"

void Calculator::divide()
{
  if (d_numB == 0)
    cerr << "Can't divide by 0\n";
  else
    cout << d_numA / d_numB;
}