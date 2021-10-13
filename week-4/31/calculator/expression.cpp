#include "calculator.ih"

// return true if line is an expression
bool Calculator::expression()
{
  // read numbers and sign
  bool isANum = number(&numA, &isAInt);
  bool isOperatorValid = getOperator();
  bool isBNum = number(&numB, &isBInt);

  // check if valid
  if (isANum && isBNum)
  {
    if (isOperatorValid)
    {
      return true;
    }
    else
    {
      cerr << "Provide one of the following operators: +, -, *, /, %\n";
    }
  }
  else
  {
    cerr << "You need to provide the calculator with proper numbers\n";
  }

  return false;
}