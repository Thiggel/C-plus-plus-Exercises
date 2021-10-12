#include "calculator.ih"

Calculator::Calculator() {
  Parser parser = Parser();

  cout << "? ";
  while (parser.reset())
  {
    double numA;
    string sign;
    double numB;

    if (
      parser.number(&numA) == Parser::NUMBER  &&
      parser.number(&numB) == Parser::NUMBER
    )
    {sign = parser.next();
      switch (sign.at(0))
      {
        case '+':
          cout << numA + numB;
          break;
        case '-':
          cout << numA - numB;
          break;
        case '/':
          cout << numA / numB;
          break;
        case '*':
          cout << numA * numB;
          break;
      }
    }

    cout << '\n' << "? ";
  }
}
