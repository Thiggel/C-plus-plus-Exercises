#include "calculator.ih"

void Calculator::run()
{
  cout << "? ";
  while (d_parser.reset())        // always reset for each operation
  {
    if (expression())             // evaluate expression
      evaluate();

    cout << '\n' << "? ";
  }
}