#include "quicksort.h"
#include <string.h>

bool greaterThan(char *str, char *str2)         // compare strings and return
                                                // true if str is greater
                                                // than str2
                                                // and false if equal or
                                                // smaller
{
  size_t strALen = strlen(str);
  size_t strBLen = strlen(str2);

  for (
    size_t characterIndex = 0;
    characterIndex < max(strALen, strBLen);     // loop until
                                                // the end of the
    ++characterIndex                            // max length string
    )
  {
    if (characterIndex >= strALen)              // if out of bounds, we know
      return false;                             // that it's smaller

    if (
      characterIndex >= strBLen ||              // if out of
                                                // bounds of other
      tolower(str[characterIndex]) >
      tolower(str2[characterIndex])             // string or character
                                                // is greater
    )
      return true;                              // then we know it's greater
  }

  return false;                                 // if they're equal -> false
}