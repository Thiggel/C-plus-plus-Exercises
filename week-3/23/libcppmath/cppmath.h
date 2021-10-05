#ifndef LIBCPPMATH_H
#define LIBCPPMATH_H

#include <iostream>
#include <cmath>

unsigned long long sqrt(unsigned long long arg);
int sqrt(int arg);
size_t sqrt(size_t arg);
double sin(size_t degrees);
double tan(size_t degrees);
double sin(size_t degrees, size_t minutes, size_t seconds);
double cos(size_t degrees, size_t minutes, size_t seconds);
double tan(size_t degrees, size_t minutes, size_t seconds);

#endif
