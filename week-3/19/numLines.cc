#include "main.ih"

void numLines()    // print number of lines in input stream
{
    string input;

    size_t numLines = 0;   // keep track of line count
    while (getline(cin, input))   // read lines until ctrl+d
        ++numLines;   // increment line count each time

    cout << "Number of lines: "
        << numLines << '\n';  // print number of lines
}