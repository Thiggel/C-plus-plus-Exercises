#include "sum.h"

double sum(                                         // sum two doubles,
  int argc,
  char *argv[]
)

{
  double sum = 0;
  for (size_t index = 0; index < static_cast<size_t>(argc); ++index)
    sum += stod(argv[index]);                   // add up all the
                                                    // elements of argv

  return sum;
}