#ifndef EXERCISES_CALCULATOR_H
#define EXERCISES_CALCULATOR_H

#include <iostream>
#include "../29/parser.h"

using namespace std;

class Calculator {
    Parser parser;
    char sign;
    double numA;
    double numB;
    bool isAInt;
    bool isBInt;

public:
    Calculator();

private:
    // return true if line is an expression
    bool expression();
    // parse the next line element as a number
    bool number(double *dest, bool *isInt);
    // returns true if the next line element is a valid operator
    bool getOperator();
    // perform the requested computation
    void evaluate();
};


#endif
