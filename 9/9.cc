#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	size_t num = atoi(argv[1]);

	for (int i = 1; i <= 10; ++i)
	{
		cout << i << " * " << num << " = " << num * i << '\n';
	}
}
