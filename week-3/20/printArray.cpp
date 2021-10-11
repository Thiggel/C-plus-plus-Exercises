#include "quicksort.h"

void printArray(char *array[], size_t size)         // print array of strings
{
  for (size_t index = 0; index < size; ++index)
    cout << array[index] << ' ';

  cout << '\n';
}