#include "main.ih"

int increasing(const void *strA, const void *strB)
{
  return  *strA > *strB ? 1 :
         *strA < *strB ? -1 :
          0;
}