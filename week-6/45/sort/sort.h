#ifndef SORT_H
#define SORT_H

#include <string>

class Sort
{
    int (*d_compare)(const void *strA, const void *strB);

public:
    Sort(int (*compare)(const void *strA, const void *strB));
    void sort(std::string **strArrFirstEl, size_t nmemb);
};

#endif