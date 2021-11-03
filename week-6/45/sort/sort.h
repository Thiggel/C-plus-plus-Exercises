#ifndef SORT_H
#define SORT_H

#include <string>

class Sort                              // wrapper for C-qsort_r-function
{
    int (*d_compare)(const void*, const void*);

public:                                 // constructor takes compare function
    Sort(int (*compare)(const void*, const void*));
    void sort(std::string **strArrFirstEl, size_t nmemb);
};

#endif