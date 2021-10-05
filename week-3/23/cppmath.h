#ifndef EXERCISES_LIBCPPMATH_H
#define EXERCISES_LIBCPPMATH_H

#include <cmath>

namespace cppmath
{
    int sqrt(int arg);
    size_t sqrt(size_t arg);
    unsigned long long sqrt(unsigned long long arg);
    double sin(size_t degrees);
    double tan(size_t degrees);
    double sin(size_t degrees, size_t minutes, size_t seconds);
    double cos(size_t degrees, size_t minutes, size_t seconds);
    double tan(size_t degrees, size_t minutes, size_t seconds);
}
#endif //EXERCISES_LIBCPPMATH_H
