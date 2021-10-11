#include <iostream>
#include "main.ih"

// print an argument and its number
void printArgument(const struct ReturnValues& argument)
{
    if (argument.ok)   // if argument exists
        cout << "argument number: "<< argument.nr
             << ", argument value: " << argument.value << '\n';
}