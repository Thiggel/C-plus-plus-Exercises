#include "main.ih"

// save a returnValues object locally and print its argument
bool structCall(int argc, char *argv[])
{
    // save the argument locally
    struct ReturnValues argument = combine(argc, argv);

    cout << "usage of structCall" << '\n';    // print usage message

    printArgument(argument);      // print the argument if it exists

    return argument.ok;           // return whether it exists
}