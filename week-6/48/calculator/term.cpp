#include "calculator.ih"

Value Calculator::term()
{
  Value ret = factor();                                 // the terms's factor

  if ((ret.token() == INT && ret.intValue() == 0) ||
      (ret.token() == DOUBLE && ret.doubleValue() >= 0 &&
      ret.doubleValue() != s_zeroDouble))
  {
    d_ok = false;
  }

  while ((this->*s_factor[charTokens("*/%")])(ret));    // add or sub factor

  return ret;
}