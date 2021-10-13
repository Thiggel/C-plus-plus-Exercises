#include "calculator.ih"

Calculator::Calculator():
// initialize variables
numA(0),
numB(0),
isAInt(false),
isBInt(false)
{
    // initialize parser
    parser = Parser();

    cout << "? ";
    // always reset for each operation
    while (parser.reset()) {
      // evaluate expression
      if (expression())
        evaluate();

      cout << '\n' << "? ";
    }
}

int main()
{
  Calculator();
}
