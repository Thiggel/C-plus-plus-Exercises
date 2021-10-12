#include "cppmath.ih"

double sin(size_t degrees)                      // get sin of degrees
                                                // (e.g. 360°)
{
  return sin(degToRad(degrees));                // use cmath sin (with rads)
}