
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
 
	string characters;							// initialize string to add ASCII characters to

	for (unsigned char character = 0; character < 128; ++character) 	// ASCII has 127 entries. Loop through all of them
	{
		if (islower(character) || isupper(character))			// characters that are a lower-case of something are letters
			characters += character;				// add this character to our string		
	}

	cout << characters;							// output final string

}
