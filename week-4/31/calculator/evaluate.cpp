#include "calculator.ih"

// perform the requested computation
void Calculator::evaluate()
{
  // evaluate each expression
  switch (sign)
  {
    case '+':
      cout << numA + numB;
      break;
    case '-':
      cout << numA - numB;
      break;
    case '/':
      if (numB == 0)
        cerr << "Can't divide by 0\n";
      else
        cout << numA / numB;
      break;
    case '*':
      cout << numA * numB;
      break;
    case '%':
      // make sure numbers are positive and integral and numB is not 0

      if (numB == 0)
        cerr << "Can't take modulo 0\n";
      else if (!isAInt || !isBInt)
        cerr << "For modulo operations, both numbers need to be integral\n";
      else if (numA < 0 || numB < 0)
        cerr << "For modulo operations, both numbers need to be positive\n";
      else
        cout << static_cast<int>(numA) % static_cast<int>(numB);
      break;
  }
}