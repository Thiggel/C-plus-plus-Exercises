#include "main.ih"

void numWords()   // print number of words in input stream
{
    string input;

    size_t numWords = 0;    // keep track of word count
    while (cin >> input)    // read continuous words until ctrl+d
        ++numWords;         // increment word count each time

    cout << "Number of words: "
        << numWords << '\n';  // print number of words
}