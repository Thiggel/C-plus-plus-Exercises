#include <iostream>
#include "libcppmath/cppmath.h"

using namespace std;

int main()
{
    unsigned long long num = 1223560005122356012;
    cout << "sqrt(" << num << ") = " << sqrt(num) << '\n';

    int numB = 1234;
    cout << "sqrt(" << numB << ") = " << sqrt(numB) << '\n';

    size_t degrees = 90;
    cout << "sin(" << degrees << ") = " << sin(degrees) << '\n';
}
