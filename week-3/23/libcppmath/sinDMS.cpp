#include "cppmath.ih"

double sin(
  size_t degrees,
  size_t minutes,
  size_t seconds
)                                               // get sin of degrees, minutes
{                                               // and seconds
  return sin(
          degMinSecToRad(degrees, minutes, seconds)
  );                                            // use cmath sin with rads
}