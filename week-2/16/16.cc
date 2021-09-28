#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	size_t radix = atoi(argv[1]);						// convert first arg to int and save as radix
	int number = atoi(argv[2]);						// convert second arg to int and save as number
	
	cout << number << ", displayed using radix " << radix << " is: ";	// print the message (what we're converting)

	string numberInBaseRadix = "";						// initialize the answer variable

	if (!number)								// if the number is 0
		numberInBaseRadix += "0";					// then it is 0 in any radix
	
	while (number)								// while number is not 0 yet
	{
		int newDigit = number % radix;					// compute remainder (last digit of new number)
		
		string newDigitStr = to_string(newDigit);			// also save as string

		if (newDigit - 10 >= 0)						// if it is beyond the 10 symbol bases
		{
			char character = 'a' + (newDigit - 10);			// then use characters as digits
			newDigitStr = character;				// and save them in string
		}

		numberInBaseRadix = newDigitStr + numberInBaseRadix;		// append new digit to start of the answer

		number /= radix;						// remove last digit and repeat everything
	}
	
	cout << numberInBaseRadix << '\n';					// print answer 
}
