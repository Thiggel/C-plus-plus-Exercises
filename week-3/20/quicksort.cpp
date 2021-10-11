#include "quicksort.h"

void quicksort(char* array[], size_t first, size_t last)
{
  if (first >= last)                                  // stop if bounds swap
    return;

  size_t pivotIndex = partition(array, first, last);  // partition the array
                                                      // into pivot, lower and
                                                      // greater part
  if(pivotIndex > 0)                                  // be careful with
                                                      // size_t
    quicksort(array, first, pivotIndex - 1);          // repeat with lower
                                                      // part

  quicksort(array, pivotIndex + 1, last);             // repeat with bigger
                                                      // part
}