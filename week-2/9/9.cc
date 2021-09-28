#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	size_t num = atoi(argv[1]);						// extract input number for multiplication table

	for (int i = 1; i <= 10; ++i)						// loop should count from 1 * number until 10 * number
	{
		cout << i << " * " << num << " = " << num * i << '\n';		// output the table line by line in the format given by exercise	
	}
}
