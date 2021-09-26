#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	size_t radix = atoi(argv[1]);
	int number = atoi(argv[2]);
	
	cout << number << ", displayed using radix " << radix << " is: ";

	string numberInBaseRadix = "";

	if (!number)
		numberInBaseRadix += "0";
	
	while (number)
	{
		int newDigit = number % radix;
		
		string newDigitStr = to_string(number % radix);

		if (newDigit - 10 >= 0)
		{
			char character = 'a' + (newDigit - 10);
			newDigitStr = character;
		}

		numberInBaseRadix = newDigitStr + numberInBaseRadix;

		number /= radix;
	}

	cout << numberInBaseRadix << '\n'; 
}
