#include "sum.h"

int sum(int argc, char *argv[], bool isInt)         // sum up ints
{
  int sum = 0;
  for (size_t index = 0; index < static_cast<size_t>(argc); ++index)
    sum += stoi(argv[index]);                   // add up all the
                                                    // elements of argv

  return sum;
}