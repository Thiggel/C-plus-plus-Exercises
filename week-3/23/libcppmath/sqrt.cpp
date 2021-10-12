#include "cppmath.ih"

unsigned long long sqrt(unsigned long long arg)       // compute integer sqrt
{                                                     // of unsigned long long
                                                      // (recursively)
  if (arg < 100)
    return lookupSqrt(arg);                           // deepest recursive
                                                      // level:
                                                      // lookup two-digit sqrt
  unsigned long long argCropped = arg / 100;          // remove two digits
                                                      // from end
  unsigned long long previousRoot = sqrt(argCropped); // get sqrt for cropped
                                                      // number recursively
  unsigned long long rest =
    argCropped - previousRoot * previousRoot;         // compute the remainder
  unsigned long long currentSqrt =
    100 * rest + arg - 100 * argCropped;
                                                      // get the two digits
                                                      // that we
                                                      // want to compute the
                                                      // sqrt of (p)
  unsigned long long b_est =                          // estimate b
                                                      // (in the formula)
    (arg - 100 * previousRoot * previousRoot)
    / (20 * previousRoot);

  while (                                             // adjust b until the
                                                      // formula is
    20 * previousRoot * b_est + b_est * b_est         // within the bounds
    > currentSqrt
  )
    --b_est;

  return previousRoot * 10 + b_est;                   // return the sqrt of p
                                                      // at the end this will
                                                      // recursively
                                                      // equate to the int
                                                      // sqrt of arg
}