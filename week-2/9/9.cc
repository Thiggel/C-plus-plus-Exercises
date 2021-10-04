#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	const size_t num = stoi(argv[1]);									// extract input number for multiplication table

	for (int multiplicationOrder = 1; multiplicationOrder <= 10; ++multiplicationOrder)			// loop should count from 1 * number until 10 * number
	{
		cout << multiplicationOrder << " * " << num << " = " << num * multiplicationOrder << '\n';	// output the table line by line in the format given by exercise	
	}
}
