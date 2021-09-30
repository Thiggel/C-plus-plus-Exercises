//JB: 0
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    //JB: SF initialization. Objects (like std::string variables) are default-initialized, well, by default.
	string characters;							// initialize string to add ASCII characters to


    //JB: Don't assume anything about the order of letters in the ascii set.
	for (unsigned char character = 0; character < 128; ++character) 	// ASCII has 127 entries. Loop through all of them
	{
        //JB: BAK
		if (islower(character) || isupper(character))			// characters that are a lower-case of something are letters
			characters += character;				// add this character to our string		
	}
	cout << characters;							// output final string

}
