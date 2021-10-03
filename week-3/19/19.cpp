#include "main.ih"

void numChars()                                                         // print number of characters in input stream
{
    string input;

    size_t numCharacters = 0;                                           // keep track of character count
    while (getline(cin, input))                                  // read continuous lines until ctrl+d
        numCharacters += input.length();                                // increment character count each time by length

    cout << "Number of Characters: " << numCharacters << '\n';          // print number of characters
}

void numWords()                                                         // print number of words in input stream
{
    string input;

    size_t numWords = 0;                                                // keep track of word count
    while (cin >> input)                                                // read continuous words until ctrl+d
        ++numWords;                                                     // increment word count each time

    cout << "Number of words: " << numWords << '\n';                    // print number of words
}

void numLines()                                                         // print number of lines in input stream
{
    string input;

    size_t numLines = 0;                                                // keep track of line count
    while (getline(cin, input))                                  // read continuous lines until ctrl+d
        ++numLines;                                                     // increment line count each time

    cout << "Number of lines: " << numLines << '\n';                    // print number of lines
}

int main(int argc, char *argv[])
{
    if(argv[1][0] != '-')                                               // check for -w, -c, and -l as argument
        return;                                                         // otherwise, the program was wrongly called

    if (argv[1][1] == 'c')
        numChars();                                                     // determine the number of characters

    else if (argv[1][1] == 'w')
        numWords();                                                     // determine the number of words

    else if (argv[1][1] == 'l')
        numLines();                                                     // determine the number of lines
}