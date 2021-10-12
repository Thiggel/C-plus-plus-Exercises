#include "cppmath.ih"

double degMinSecToRad(                         // convert degrees, minutes,
  size_t degrees,                              // and seconds to radians
  size_t minutes,
  size_t seconds
)
{
  degrees += minutes / 60 + seconds / 3600;    // sum up onto degrees
  return degToRad(degrees);                    // convert degrees to radians
}