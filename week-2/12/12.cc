#include <iostream>

using namespace std;

int main()
{
    string input;

    while (true)
    {
        cout << "?";
        getline(cin,input);                              // read input string to be reversed

        if (input.empty())                                      // Break loop if line is empty
            break;


        for (                                                   // Loop for reverse iterator
            string::reverse_iterator revIt = input.rbegin();    // starting from last index in
            revIt != input.rend();                              // string moving back
            ++revIt
        )
        {
            cout << *revIt;                                     // and print last digit
        }

        cout << '\n';
    }
}