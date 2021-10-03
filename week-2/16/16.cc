#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int radix = stoi(argv[1]);						                // convert first arg to int and save as radix
    int number = stoi(argv[2]);						                // convert second arg to int and save as number

    cout << number << ", displayed using radix " << radix << " is: ";	// print the message (what we're converting)

    bool isNegative = false;                                            // handle negative numbers
    if (number < 0)
    {
        isNegative = true;
        number *= -1;                                                   // still use positive counterpart
    }

    string numberInBaseRadix;						                    // initialize the answer variable

    do {
        int newDigit = number % radix;					                // compute remainder (last digit of new number)

        char character =
                newDigit - 10 >= 0                                      // if it is beyond the 10 symbol bases
                ? 'a' + (newDigit - 10)                                 // then use characters as digits
                : '0' + newDigit;                                       // otherwise, use number

        numberInBaseRadix = character + numberInBaseRadix;		        // append new digit to start of the answer

        number /= radix;						                        // remove last digit and repeat everything
    } while (number > 0);                                               // repeat while number is not 0 yet

    if (isNegative)
        numberInBaseRadix = '-' + numberInBaseRadix;                    // add a minus if it is negative

    cout << numberInBaseRadix << '\n';					                // print answer
}
