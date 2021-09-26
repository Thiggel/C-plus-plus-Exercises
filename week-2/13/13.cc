#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int number = atoi(argv[1]);				// convert first argument to integer and save it as the number
	
	cout << number << " = ";				// first print number and an equals sign
	
	string calculation = "";				// initialize variable to save calculation while printing binary digits
	int remainingBinaryDigits = 32;				// we need to print 32 binary digits -> keep track of how many already printed

	if (number < 0)						// if it's a negative number
	{
		int firstBitNegative = -2147483648;		// take -(2^31) -> highest presentable number in 32bits with negative sign
		
		cout << "1";					// print 1 because first binary digit is 1
		--remainingBinaryDigits;			// now we only need to print 31 more binary digits

		calculation += to_string(firstBitNegative);	// add the number to the calculation string
		calculation += " + ";				// add a plus to the calculation string	
	
		number -= firstBitNegative;			// subtract -(2^31) from the number so that it gets positive
	}

	while (true)						// while loop that runs until it's broken from inside
	{
		int exponent = log2(number);			// get the exponent to compute the nearest power of two to the number
		int nearestPowerOfTwo = pow(2, exponent);	// get nearest power of two
		
		while (remainingBinaryDigits > exponent + 1)	// print 0's until the point where a 1 should be printed for the nearest power of two
		{
			cout << "0";				// print 0 (see above)
			--remainingBinaryDigits;		// now we need to print one binary digit fewer
		}
			
		cout << "1";					// print 1 to represent nearest power of two
		--remainingBinaryDigits;			// now we need to print one binary digit fewer
		
        	calculation += to_string(nearestPowerOfTwo);	// add the number to the calculation string

		number -= nearestPowerOfTwo;			// subtract nearest power of two from the original number so that we 
								// can repeat the same procedure with the remaining number

		if (!number)					// if we're already at 0
		{
			while (remainingBinaryDigits > 0)	// print remaining 0's
			{
				cout << "0";			// print 0 (see above)
                        	--remainingBinaryDigits;	// while decrementing our count of binary digits	
			}

			break;					// end the loop
		}

		calculation += " + ";				// if this is not the end, print a plus sign
	}

	cout << " = " << calculation << '\n';			// in the end, also print the calculation and a new line
}
