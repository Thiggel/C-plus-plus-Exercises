#include "quicksort.h"

extern char *environ[];                           // global environment vars

int main()
{
    size_t envLength = 1;
    while (environ[envLength] != 0)               // determine length of
                                                  // environment vars
      ++envLength;

    quicksort(environ, 0, envLength - 1);
    printArray(environ, envLength);               // print newly sorted
}