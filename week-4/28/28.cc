#include <iostream>

using namespace std;

// TODO I think they always want us to create an internal header file and a header file for each class

class Line
{
public:
    static bool getLine(string &input);
    static string next(string &input);
};

bool Line::getLine(string &input)
{
    for (char index : input)    //Loop for each character in string
        if (!isspace(index))
            return true;        //Return true if ws-char is found

    return false;               //Return false otherwise
}

string Line::next(string &input)
{
    string subStr;
    auto const npos = input.find(' '); //TODO Doesn't work for tab yet

    if (npos != string::npos) //Return substring if non-ws is found
        return subStr = input.substr(npos + 1);

    return subStr;     //Return empty string if no substring is available
}


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