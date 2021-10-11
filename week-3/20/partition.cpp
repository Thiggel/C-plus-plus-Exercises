#include "quicksort.h"

size_t partition(                         // partition array by pivot
  char* array[],                          // so that all elements left
  size_t left,                            // of pivot are smaller and all
  size_t right                            // elements right of pivot are
)                                         // bigger
{
  size_t pivotIndex = left;               // use leftmost index as pivot
  ++left;                                 // look at next index

  do
  {
    if (greaterThan(
      array[left],                        // compare strings to pivot
      array[pivotIndex]
    ))
    {
      swap(
      array[left],
      array[right]
      );                                  // after swap right is
                                          // definitely greater than pivot
      --right;                            // so don't look at it anymore
    }
    else                                  // if equal or smaller
    {
      swap(
        array[pivotIndex],
        array[left]
      );                                  // swap pivot and current

      pivotIndex = left;                  // also change index
      ++left;                             // that num is definitely
                                          // smaller now
    }
  }
  while (left <= right);                  // repeat until bounds are equal

  return pivotIndex;
}