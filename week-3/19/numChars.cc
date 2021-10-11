#include "main.ih"

void numChars()     // print number of characters in input stream
{
    string input;
    std::string tracker;

    while (getline(cin, input))    // read lines until ctrl+d
        tracker += input;  // append lines

    cout << "Number of Characters: "
        << tracker.size() << '\n';      // print number of characters
}