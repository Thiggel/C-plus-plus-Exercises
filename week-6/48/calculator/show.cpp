#include "calculator.ih"

Token Calculator::show(Value const &value)
{
  switch (value.token())
  {
    case DOUBLE:
      cout << value.doubleValue() << " (double)\n";
      break;

    case INT:
      cout << value.intValue() << " (int)\n";
      break;

    case IDENT:
    {
      auto symbol = d_symtab.at(value.intValue());
      cout << symbol.ident() << " [value: ";
      if (symbol.type() == INT)
        cout << symbol.intValue() << " (int)]\n";
      else
        cout << symbol.doubleValue() << " (double)]\n";
    }
      break;

    default:
      break;
  }

  return ERROR;
}