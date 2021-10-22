#include "calculator.ih"

void Calculator::run()
{
  while (true)
  {
    prompt();                       // show a prompt, prepare for the
    // next expression evaluation

    if (d_tokenizer.token() == QUIT)
      break;

    if (atEoln())                   // no content, just an empty line
      continue;

    Value value = evaluate();       // evaluate an expression

    if (not ok())
      cout << "error(s) in expression\n";
    else
      show(value);

    d_tokenizer.reset();
  }
}