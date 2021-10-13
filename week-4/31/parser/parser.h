#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include "../line/line.h"

class Parser
{
    // current line
    Line d_line;

    // is last read number integral
    bool d_isIntegral;

public:
    enum Return
    {
        // the substring didn't contain a number
        NO_NUMBER,
        // the substring did contain a number
        NUMBER,
        // the line didn't contain more substrings
        EOLN
    };

    // constructor
    Parser();

    // fills d_line with the next input line,
    // returning true if such a line was read
    bool reset();

    // returns the value stored in the next substring of the just read line.
    // Its returns type is an enum Return
    Return number(double *dest);

    // returns the value of its d_integral data member
    // (i.e., true if the value found by number is an integral value,
    // so it doesn't contain dots, 'e' or 'E' characters).
    bool isIntegral();

    // returns d_line's next substring.
    std::string next();

private:
    // handling the conversion from str to a double,
    // also taking care of failing conversions
    Return convert(double *dest, std::string const &str);

    // uses stod to convert the str's content to a double. All
    // the str's characters must be used when computing the double.
    // If not, then false is returned, otherwise true. If the conversion succeeds
    // and str containst dot or 'e' or 'E' characters then the member
    // d_isIntegral is set to false, otherwise to true.
    bool pureDouble(double *dest, std::string const &str);
};


#endif
