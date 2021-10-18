#include "calculator.ih"

bool Calculator::expression()               // true if line is an expression
{
  bool isANum = number(&d_numA, &d_isAInt); // read numbers and sign
  bool isOperatorValid = getOperator();
  bool isBNum = number(&d_numB, &d_isBInt);

  if (isANum && isBNum)                     // check if valid
    if (isOperatorValid)
      return true;
    else
      cerr << "Provide one of the following operators: +, -, *, /, %\n";
  else
    cerr << "You need to provide the calculator with proper numbers\n";

  return false;
}