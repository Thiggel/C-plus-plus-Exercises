#include "calculator.ih"

bool Calculator::atEoln()           // eolns end expressions
{
  if (d_tokenizer.token() == CHAR and d_tokenizer.charValue() == '\n')
  {
    d_tokenizer.reset();
    return true;
  }

  return false;
}