#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int number = atoi(argv[1]);				            // convert first argument to integer and save it as the number

	cout << number << " = ";				            // first print number and an equals sign

    int remainingBits = sizeof(int) * 8;
    string calculation;
    if (number < 0)						                // if it's a negative number
    {
        int first = 1 << (remainingBits - 1);           // take -(2^31) ->
                                                        // highest presentable number in 32bits with negative sign

        cout << "1";					                // print 1 because first binary digit is 1
        --remainingBits;			                    // now we only need to print 31 more binary digits

        calculation += to_string(first) + " + ";	    // add the number to the calculation string

        number -= first;			                    // subtract -(2^31) from the number so that it gets positive
    }

    int nearestPow2 = 1;
    int absNum = number < 0 ? -1 * number : number;
    while (nearestPow2 < absNum) nearestPow2 <<= 1;
    nearestPow2 >>= 1;

    cout << nearestPow2;

    return 0;

    /*while (true)						                // while loop that runs until it's broken from inside
    {
        //JB: WIM? And please leave floating-point values out of this.
        int exponent = log2(number);			        // get the exponent to compute the nearest power of two to the number
        for (int copy = number; copy > 0; copy >>= 1)
            exponent++;
        int nearestPowerOfTwo = pow(2, exponent);	    // get nearest power of two

        //JB: LTL
        while (remainingBinaryDigits > exponent + 1)	// print 0's until the point where
                                                        // a 1 should be printed for the nearest power of two
        {
            cout << "0";				                // print 0 (see above)
            --remainingBinaryDigits;		            // now we need to print one binary digit fewer
        }

        cout << "1";					                // print 1 to represent nearest power of two
        --remainingBinaryDigits;			            // now we need to print one binary digit fewer

        //JB: Indentation!
        calculation += to_string(nearestPowerOfTwo);	// add the number to the calculation string

        number -= nearestPowerOfTwo;			        // subtract nearest power of two from the original number so that we
                                                        // can repeat the same procedure with the remaining number

        if (!number)					                // if we're already at 0
        {
            while (remainingBinaryDigits > 0)	        // print remaining 0's
            {
                cout << "0";			                // print 0 (see above)
                --remainingBinaryDigits;	            // while decrementing our count of binary digits
            }

            break;					                    // end the loop
        }

        calculation += " + ";				            // if this is not the end, print a plus sign
    }*/

    cout << " = " << calculation << '\n';			    // in the end, also print the calculation and a new line
}
