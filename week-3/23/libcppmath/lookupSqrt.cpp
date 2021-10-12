#include "cppmath.ih"

unsigned lookupSqrt(unsigned arg)                        // look up sqrt of
{                                                        // two-digit int.
  if (arg > 100)                                         // make sure it is
  {                                                      // a two.digit number
    std::cout << "[ function lookupSqrt: " <<            // -> print error
              "argument must be smaller or " <<          // message
              "equal to 100. ]\n";

    return 0;                                            // end execution
  }

  unsigned lookupTable[101];                            // init lookup table

  lookupTable[0] = 0;
  lookupTable[100] = 100;

  size_t index = 1;
  for (size_t num = 1; num < 10; ++num)                 // fill with values
  {
    for (size_t numOfItems = 1; numOfItems < 2 * num + 1; ++numOfItems)
    {
      lookupTable[index] = num;
      ++index;
    }
  }

  return lookupTable[arg];                           // return sqrt from table
}