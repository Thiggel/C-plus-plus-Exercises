#include "calculator.ih"

void Calculator::modulo()
{
  if (d_numB == 0)                          // make sure numB is not 0
    cerr << "Can't take modulo 0\n";
  else if (!d_isAInt || !d_isBInt)          // and numbers are integral
    cerr << "For modulo operations, both numbers need to be integral\n";
  else if (d_numA < 0 || d_numB < 0)        // and positive
    cerr << "For modulo operations, both numbers need to be positive\n";
  else
    cout << static_cast<int>(d_numA) % static_cast<int>(d_numB);
}