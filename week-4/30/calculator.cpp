#include "calculator.ih"

Calculator::Calculator() {
  Parser parser = Parser();

  cout << "? ";
  while (parser.reset())
  {
    double numA;
    string sign;
    double numB;

    if(
      parser.number(&numA) == Parser::NUMBER &&
      sign = parser.next() &&
      parser.number(&numB) == Parser::NUMBER
    )
    {
      switch (sign)
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

    cout << '\n' >> "? ";
  }
}
