#include <iostream>

using namespace std;

int main()
{
	size_t value;
		
	cin >> value;

	cout << (value % 2 ? "odd" : "even") << '\n';			// remainder exists after dividing by two -> odd
	
	cout << (value & 1 ? "odd" : "even") << '\n';			// last digit of binary representation is 1 -> odd
	
	cout <<  ((value ^ 1) < value ? "odd" : "even") << '\n';	// bitwise xOr with 1 increments number by 1 if it is even 
									// so: resulting number smaller than original -> odd
	
	cout <<  ((value | 1) == value ? "odd" : "even") << '\n';	// bitwise Or with 1 increments number by 1 if even, else leaves
									// unchanged, so: if same after operation -> odd

	cout << (value - (value >> 1 << 1) ? "odd" : "even") << '\n';	// shift the number one to the right and then back to the left
									// -> last binary digit gets lost -> subtract from original number
									// -> get last binary digit (1 => odd)
	
}
