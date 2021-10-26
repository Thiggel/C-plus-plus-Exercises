#ifndef SORT_H
#define SORT_H

#include <string>

class Sort
{
    int (*d_compare)(void*, const void*, const void*);

public:
    Sort(int (*compare)(void*, const void*, const void*));
    void sort(std::string **strArrFirstEl, size_t nmemb);
};

#endif