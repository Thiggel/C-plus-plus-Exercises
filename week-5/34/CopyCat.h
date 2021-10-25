#ifndef INCLUDED_COPYCAT_
#define INCLUDED_COPYCAT_

#include <cstddef>

extern char **environ;      // environ variable as described in exercise

class CopyCat
{
    size_t d_size;
    char **d_data;

    public:
        CopyCat();                               // copies environ
        CopyCat(int argc, char **argv);          // copies argv
        CopyCat(char **data);                    // cp. any environ-like variable

        static char *ntbsCopy(char const *array, size_t size);
        static size_t nElements(char const *array);          // nElements for 1D array
        static size_t nElements(char const *const *array);   // nElements for 2D array
        static char **duplicate(char const *const *array);
};

inline CopyCat::CopyCat()
{
    d_data = duplicate(environ);                 // inline constructor as described in exercise
}

#endif
