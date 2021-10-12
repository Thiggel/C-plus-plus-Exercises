#include "cppmath.ih"

double cos(size_t degrees)                      // get cos of degrees
                                                // (e.g. 360°)
{
  return cos(degToRad(degrees));                // use cmath cos (with rads)
}

