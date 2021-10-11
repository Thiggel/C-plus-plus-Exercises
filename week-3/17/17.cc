#include "sum.h"

int main(int argc, char *argv[])
{
	++argv;                                           // forget about the
                                                    // function name
	--argc;                                           // and decrement argc
                                                    // accordingly

  bool anyContainsDot = false;
  for (size_t index = 0; index < static_cast<size_t>(argc); ++index)
                                                  // check if any
    if (containsDot(argv[index]))            // number in the set
    {                                             // contains a dot
      anyContainsDot = true;
      break;
    }

  if (anyContainsDot)
    cout << sum(                                    // call double sum
      argc,                                         // function
      argv
    ) << '\n';
  else
    cout << sum(                                    // call int sum function
      argc,
      argv,
      true
    ) << '\n';
}
