#include <iostream>
using namespace std;
int main()
{
    string input;

    while(true){
        cout << "?";
        getline(cin,input);

        if (input.empty())          //Break loop if line is empty
            break;

        //Loop for reverse iterator starting from last index in string moving back
        for (string::reverse_iterator revIt = input.rbegin(); revIt != input.rend(); revIt++)
        {
            cout << *revIt;
        }
        cout << '\n';
    }
    return 0;
}