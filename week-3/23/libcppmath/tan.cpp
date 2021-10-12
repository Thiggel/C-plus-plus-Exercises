#include "cppmath.ih"

double tan(size_t degrees)                      // get tan of degrees
                                                // (e.g. 360°)
{
  return tan(degToRad(degrees));                // use cmath tan (with rads)
}