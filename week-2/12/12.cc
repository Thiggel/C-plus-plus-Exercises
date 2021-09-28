#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{	
	string input;
	
	while (true)						// repeat until the input is empty (see below)
	{
        	cout << "?";					// always first print question mark
        	getline(cin, input);				// read an input line 

        	if (input.empty())				// end program if empty
            		break;

        	reverse(input.begin(), input.end());		// reverse input
        	cout << '\n' << input << '\n' ;			// print the reversed line
    	}
}
