#include <iostream>
#include <string.h>

using namespace std;

void printArray(char *array[], size_t size)                                // print array of strings
{
    for (size_t index = 0; index < size; ++index)
        cout << array[index] << ' ';

    cout << '\n';
}

bool greaterThan(char* str, char* str2)                                     // compare strings and return
                                                                            // true if str is greater than str2
                                                                            // and false if equal or smaller
{
    for (
        size_t characterIndex = 0;
        characterIndex < max(strlen(str), strlen(str2));                  // loop until the end of the
        ++characterIndex                                                  // max length string
    )
    {
        if (characterIndex >= strlen(str))                                 // if out of bounds, we know
            return false;                                                  // that it's smaller

        if (
            characterIndex >= strlen(str2) ||                               // if out of bounds of other
            tolower(str[characterIndex]) > tolower(str2[characterIndex])    // string or character is greater
        )
            return true;                                                    // then we know it's greater
    }

    return false;                                                           // if they're equal -> false
}

size_t partition(char* array[], size_t left, size_t right)                 // partition array by pivot
                                                                            // so that all elements left
                                                                            // of pivot are smaller
                                                                            // and all elements right of
                                                                            // pivot are bigger
{
    size_t pivotIndex = left;                                               // use leftmost index as pivot
    ++left;                                                                 // look at next index

    do
    {
        if (greaterThan(array[left], array[pivotIndex]))           // compare strings to pivot
        {
            swap(array[left], array[right]);                          // after swap right is
                                                                             // definitely greater than pivot
            --right;                                                         // so don't look at it anymore
        }
        else                                                                 // if equal or smaller
        {
            swap(array[pivotIndex], array[left]);                     // swap pivot and current
            pivotIndex = left;                                               // also change index
            ++left;                                                          // that num is definitely
                                                                             // smaller now
        }
    }
    while (left <= right);                                                   // repeat until bounds are equal

    return pivotIndex;
}

void quicksort(char* array[], size_t first, size_t last)
{
    if (first >= last)                                                      // stop if bounds swap
        return;

    size_t pivotIndex = partition(array, first, last);                      // partition the array
                                                                            // into pivot, lower and
                                                                            // greater part
    if(pivotIndex != 0)                                                     // be careful with size_t
        quicksort(array, first, pivotIndex - 1);                       // repeat with lower part

    quicksort(array, pivotIndex + 1, last);                            // repeat with bigger part
}

extern char *environ[];                                                     // global environment vars

int main()
{
    size_t envLength = 1;
    while ( environ[envLength] != 0)                                            // determine length of
                                                                                // environment vars
            ++envLength;

    quicksort(environ, 0, envLength - 1);
    printArray(environ, envLength);                                               // print newly sorted
}