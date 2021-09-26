#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	++argv;									// remove the program name
	--argc;									// decrement argc to account for removed program name
	
	for (
		int combinationIndex = 0; 					// iterate over the number of possible combinations
		combinationIndex < pow(2, argc); 				// which are 8 (2 to the number of words)
		++combinationIndex
	)
	{
		string combination = "";					// initialize string for the line (necessary as we
										// build it from right to left)
		int sumOfWords = combinationIndex;				// copy the combination index -> subtract numbers from it
										// without changing original index
		for (
			int wordIndex = argc - 1; 				// go from end of argv to beginning
			combinationIndex && wordIndex >= 0; 
			--wordIndex
		)
		{
			int binaryIndex = pow(2, wordIndex);			// use 2 to the power of the index

			if (sumOfWords - binaryIndex >= 0)			// and subtract it from the combination index
			{
				string word(argv[wordIndex]);			// convert the argument to a string
				combination = " " + word + combination;		// append to the left side of the combination
				sumOfWords -= binaryIndex;			// change the sum (that's why we copied it before)
			}
		}

		cout << combinationIndex << ':' << combination << '\n';		// print the combination and a new line
	}
}
