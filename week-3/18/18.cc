#include <iostream>
#include "main.ih"

using namespace std;

ReturnValues combine(int argc, char *argv[])                // get a requested value from argv in a ReturnValues object
{
    struct ReturnValues store;                              // initialize returnValues Object

    store.nr = stoi(argv[1]) - 1;                       // get the index of the requested argument
    store.ok = argv[store.nr] != nullptr;               // store whether that index exists in the argv array
    store.value = argv[store.nr] ? argv[store.nr] : "";     // store the value if it exists

    return store;                                           // return the returnValues object
}

void printArgument(const struct ReturnValues& argument)            // print an argument and its number
{
    if (argument.ok)                                        // if argument exists
        cout << "argument number: "<< argument.nr
             << ", argument value: " << argument.value << '\n';  // print the argument number and value
}

bool structCall(int argc, char *argv[])                     // save a returnValues object locally and print its argument
{
    struct ReturnValues argument = combine(argc, argv);     // save the argument locally

    cout << "usage of structCall" << '\n';                  // print usage message

    printArgument(argument);                       // print the argument if it exists

    return argument.ok;                                     // return whether it exists
}

void boundCall(int argc, char *argv[])                      // extract a requested argument and print is num and value
{
    printArgument(combine(argc, argv));            // print the argument
}

int main(int argc, char *argv[])
{
    if ( argc == 1 )
    {
        cout << "Please enter a valid input; the first argument must" << '\n' <<
        "specify the number of the argument that is requested." << '\n' <<
        "e.g: 3 hello world" << endl;
        return 0;
    }

    if (!structCall(argc, argv))                            // call struct call and end the program if
        return 0;                                           // the argument is not ok

    boundCall(argc, argv);                  // call bound call to print the argument again
    return 0;
}