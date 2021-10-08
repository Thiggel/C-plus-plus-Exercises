#include <iostream>
#include "line.h"

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    while (!input.empty())
        if (Line::getLine(input))
        {
            input = Line::next(input);

            cout << input << endl;
        }
}