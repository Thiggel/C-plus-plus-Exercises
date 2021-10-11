#ifndef EXERCISES_QUICKSORT_H
#define EXERCISES_QUICKSORT_H

#include <iostream>

using namespace std;

void printArray(char *array[], size_t size);    // print array of strings

bool greaterThan(char *str, char *str2);        // compare strings and return
                                                // true if str is greater
                                                // than str2
                                                // and false if equal or
                                                // smaller

size_t partition(                               // partition array by pivot
  char* array[],                                // so that all elements left
  size_t left,                                  // of pivot are smaller and
                                                // all
  size_t right                                  // elements right of pivot are
);                                              // bigger

void quicksort(char* array[], size_t first, size_t last);

#endif
