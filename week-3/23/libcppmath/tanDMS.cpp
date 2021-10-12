#include "cppmath.ih"

double tan(
  size_t degrees,
  size_t minutes,
  size_t seconds
)                                               // get tan of degrees, minutes
{                                               // and seconds
  return tan(
          degMinSecToRad(degrees, minutes, seconds)
  );                                            // use cmath tan with rads
}