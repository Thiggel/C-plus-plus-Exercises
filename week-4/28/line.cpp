//
// Created by Filipe Laitenberger on 08/10/2021.
//

#include "line.h"

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