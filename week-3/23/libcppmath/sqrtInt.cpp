#include "cppmath.ih"

int sqrt(int arg)                                   // sqrt of int
{
  if (arg < 0)                                      // only allow positive
                                                    // integers
  {
    std::cout << "[ function sqrt: " <<             // -> print error
      "argument must be bigger or " <<              // message
      "equal to 0. ]\n";
  }

  return static_cast<int>(                          // cast back to int
    sqrt(static_cast<unsigned long long>(abs(arg))) // take abs and cast to
                                                    // long
  );
}