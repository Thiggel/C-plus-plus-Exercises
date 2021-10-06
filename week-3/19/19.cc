#include "main.ih"
#include <iostream>
using namespace std;

void numChars()
{
    string input;

    size_t numCharacters = 0;
    while (getline(cin, input))
        numCharacters += input.length();

    cout << "Number of Characters: " << numCharacters << '\n';
}

void numWords()                                                         // print number of words in input stream
{
    string input;

    size_t numWords = 0;
    while (cin >> input)
        ++numWords;

    cout << "Number of words: " << numWords << '\n';
}

void numLines()
{
    string input;

    size_t numLines = 0;
    while (getline(cin, input))
        ++numLines;

    cout << "Number of lines: " << numLines << '\n';
}

int main(int argc, char *argv[])
{
    if(argv[1][0] != '-')
        return 0;

    if (argv[1][1] == 'c')
        numChars();

    else if (argv[1][1] == 'w')
        numWords();

    else if (argv[1][1] == 'l')
        numLines();
}