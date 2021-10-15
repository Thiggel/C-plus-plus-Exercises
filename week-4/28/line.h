#ifndef LINE_H
#define LINE_H

#include <iostream>
#include <string>

class Line
{
    std::string d_line;         // last read line

    size_t d_pos;               // read pos in line

public:
    bool getLine();             // read line -> false if only WS

    std::string next();         // get next substring in line
};


#endif
