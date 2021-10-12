#include "cppmath.ih"

double cos(
  size_t degrees,
  size_t minutes,
  size_t seconds
)                                               // get cos of degrees, minutes
{                                               // and seconds
  return cos(
          degMinSecToRad(degrees, minutes, seconds)
  );                                            // use cmath cos with rads
}