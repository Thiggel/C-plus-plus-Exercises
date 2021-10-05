#include "cppmath.h"
#include "cppmath.ih"

unsigned lookupSqrt(unsigned arg)                               // look up sqrt of
{                                                               // two-digit int.
    if (arg > 100)                                              // make sure it is
    {                                                           // a two.digit number
        std::cout << "[ function lookupSqrt: " <<               // -> print error
             "argument must be smaller or " <<                  // message
             "equal to 100. ]\n";

        return 0;                                               // end execution
    }

    unsigned lookupTable[] = {                                  // lookup table
            0,
            1, 1, 1,
            2, 2, 2, 2, 2,
            3, 3, 3, 3, 3, 3, 3,
            4, 4, 4, 4, 4, 4, 4, 4, 4,
            5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
            6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
            7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
            8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
            9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
            10
    };

    return lookupTable[arg];                                    // return sqrt from table
}

unsigned long long sqrt(unsigned long long arg)                 // compute integer sqrt
{                                                               // of unsigned long long
                                                                // (recursively)
    if (arg < 100)
        return lookupSqrt(arg);                                 // deepest recursive level:
                                                                // lookup two-digit sqrt
    unsigned long long argCropped = arg / 100;                  // remove two digits from end
    unsigned long long previousRoot = sqrt(argCropped);         // get sqrt for cropped number
                                                                // recursively
    unsigned long long rest =
            argCropped - previousRoot * previousRoot;           // compute the remainder
    unsigned long long currentSqrt =
            100 * rest + arg - 100 * argCropped;                // get the two digits that we
                                                                // want to compute the sqrt of (p)
    unsigned long long b_est =                                  // estimate b (in the formula)
            (arg - 100 * previousRoot * previousRoot)
            / (20 * previousRoot);

    while (                                                     // adjust b until the formula is
        20 * previousRoot * b_est + b_est * b_est               // within the bounds
        > currentSqrt
    )
        --b_est;

    return previousRoot * 10 + b_est;                           // return the sqrt of p
                                                                // at the end this will recursively
                                                                // equate to the int sqrt of arg
}

int sqrt(int arg)                                               // sqrt of int
{
    if (arg < 0)                                                // only allow positive integers
    {
        std::cout << "[ function sqrt: " <<                     // -> print error
          "argument must be bigger or " <<                      // message
          "equal to 0. ]\n";
    }

    return static_cast<int>(                                    // cast back to int
            sqrt(static_cast<unsigned long long>(abs(arg)))         // take abs and cast to long
    );
}

size_t sqrt(size_t arg)                                         // sqrt of unsigned int
{
    return static_cast<size_t>(                                 // cast back to size_t
            sqrt(static_cast<int>(arg))                         // pass to int sqrt after casting
    );
}

double degToRad(size_t degrees)                                 // convert degrees to radians
{
    return M_PI / 180 * degrees;
}

double sin(size_t degrees)                                      // get sin of degrees (e.g. 360°)
{
    return sin(degToRad(degrees));                              // use cmath sin (with rads)
}

double cos(size_t degrees)                                      // get cos of degrees (e.g. 360°)
{
    return cos(degToRad(degrees));                              // use cmath cos (with rads)
}

double tan(size_t degrees)                                      // get tan of degrees (e.g. 360°)
{
    return tan(degToRad(degrees));                              // use cmath tan (with rads)
}

double degMinSecToRad(                                          // convert degrees, minutes,
    size_t degrees,                                             // and seconds to radians
    size_t minutes,
    size_t seconds
)
{
    degrees += minutes / 60 + seconds / 3600;                   // sum up onto degrees
    return degToRad(degrees);                                   // convert degrees to radians
}

double sin(size_t degrees, size_t minutes, size_t seconds)      // get sin of degrees, minutes
{                                                               // and seconds
    return sin(degMinSecToRad(degrees, minutes, seconds));      // use cmath sin with rads
}

double cos(size_t degrees, size_t minutes, size_t seconds)      // get cos of degrees, minutes
{                                                               // and seconds
    return cos(degMinSecToRad(degrees, minutes, seconds));      // use cmath cos with rads
}

double tan(size_t degrees, size_t minutes, size_t seconds)      // get tan of degrees, minutes
{                                                               // and seconds
    return tan(degMinSecToRad(degrees, minutes, seconds));      // use cmath tan with rads
}