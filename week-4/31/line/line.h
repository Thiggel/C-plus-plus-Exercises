#ifndef LINE_H
#define LINE_H

#include <iostream>

class Line
{
    // line that was last read
    std::string line;

    // position after current
    // substring in line
    size_t pos;

    // current substring
    std::string subStr;

public:
    // constructor
    Line();

    // read a line and return true if it contains
    // non-word characters
    bool getLine();

    // return the next substring from the line
    // retrieved by getLine() consisting of non-ws
    // characters, and an empty string if no such
    // substring is available anymore
    std::string next();
};


#endif
