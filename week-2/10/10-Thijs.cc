#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	string characters = "";						// initialize string to add ASCII characters to

	for(char character = ' '; character <= '~'; ++character) 	// loop through ASCII characters that are not control codes
	{
		if(islower(character))					// characters that are a lower-case of something are letters 
		{
			characters += character;			// add this character to our string
		}
		else if(isupper(character)) 				// characters that are a upper-case of something are letters
		{
			characters += character;			// add this character to our string
		}
	}
	cout << characters;						// output final strin

}
