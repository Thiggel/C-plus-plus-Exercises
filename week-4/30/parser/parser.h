#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <string>
#include "../line/line.h"

class Parser
{
    Line d_line;                            // current line

    bool d_isIntegral;                      // is last read number integral

public:
    enum Return
    {
        NO_NUMBER,
        NUMBER,
        EOLN                                // -> no substr in line anymore
    };

    Parser();

    bool reset();                           // fill d_line -> true if success

    Return number(double *dest);            // get next substr if number

    bool isIntegral();                      // see whether last number is int

    std::string next();                     // return next substr

private:
    Return convert(                         // convert str to
      double *dest,                         // number if possible
      std::string const &str                // and return the read type
    );

    bool pureDouble(                        // convert str to double
      double *dest,                         // return true if success
      std::string const &str
    );
};

#endif
