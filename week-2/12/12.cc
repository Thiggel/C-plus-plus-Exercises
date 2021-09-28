#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string input;

    while(true){
        cout << "?";
        getline(cin,input);

        if (input.empty())
            break;

        reverse(input.begin(), input.end());
        cout << '\n' << input << '\n' ;

    }
}