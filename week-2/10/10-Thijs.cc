#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	string characters = "";

	for(char character = ' '; character <= '~'; ++character)
	{
		if(islower(character))
		{
			characters += character;
		}
		else if(isupper(character)) 
		{
			characters += character;		
		}
	}
	cout << characters;

}
