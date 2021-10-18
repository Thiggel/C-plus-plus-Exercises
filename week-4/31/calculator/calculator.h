#ifndef EXERCISES_CALCULATOR_H
#define EXERCISES_CALCULATOR_H

#include <iostream>
#include <string>
#include "../parser/parser.h"

class Calculator {
    Parser d_parser;
    std::string d_sign;
    double d_numA;
    double d_numB;
    bool d_isAInt;
    bool d_isBInt;

public:
    Calculator();
    void run();                             // start the calculator

private:
    bool expression();                      // true if line is an expression
    bool number(double *dest, bool *isInt); // parse next line el as a number
    bool getOperator();                     // read operator + true if valid
    void evaluate();                        // perform requested computation

    void add();                             // operation methods
    void subtract();
    void multiply();
    void divide();
    void modulo();
};


#endif
