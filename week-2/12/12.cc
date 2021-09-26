#include <iostream>

using namespace std;

int main() 
{
        string sentence; 						// initialize variable to save prompted strings in
	
        while (true)							// indefinite while loop (gets terminated on a condition inside)
        {
               	cout << "? ";                                   	// start the prompt with question mark
        	getline(cin, sentence);                         	// ask for a string to be reversed

		if (sentence == "") 					// terminate program if user just presses enter
			break;

		for (
			char characterIndex = sentence.length() - 1;	// initialize iterator at last index of string
			characterIndex >= 0; 				// decrement while not at index 0
			--characterIndex
		)
                        cout << sentence[characterIndex];		// print the string from back to front

                cout << '\n';						// terminate the reversed sentence with a new line
        }
}

