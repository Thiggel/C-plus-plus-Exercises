#include <iostream>

using namespace std;

// Hey Jurjen, I hope you're proud :)

int main(int argc, char *argv[])
{
    ++argv;									                                    // remove the program name
    --argc;                                                                     // decrement argc to account for removed program name

    for (int combination = 0; combination < (2 << (argc - 1)); ++combination)   // there are 2^argc - 1 combinations
    {
        cout << combination << ':';

        for (int word = 0; word < argc; ++word)                                 // check for every word if it appears in
            // the combination
            if (combination & ((2 << word) / 2))			                    // by seeing if 2^word have ones at the same
                // position
                cout << ' ' << argv[word];	                                    // -> print the word

        cout << '\n';
    }
}