#include <iostream>

using namespace std;

int main()
{
	string ascii_set = "";

	for (char character = ' '; character <= '~'; ++character)
	{
		ascii_set += character;
	}

	cout << ascii_set;
}
