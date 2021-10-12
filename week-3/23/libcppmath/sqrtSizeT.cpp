#include "cppmath.ih"

size_t sqrt(size_t arg)                              // sqrt of unsigned int
{
  return static_cast<size_t>(                        // cast back to size_t
          sqrt(static_cast<int>(arg))                // pass to int sqrt after
                                                     // casting
  );
}