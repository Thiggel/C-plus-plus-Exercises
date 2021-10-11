#include "main.ih"

int main(int argc, char *argv[])
{
    if ( argc == 1 || stoi(argv[1]) < 1)
    {
        cout << "Please enter a valid input; the first argument must" << '\n' <<
             "specify the number of the argument that is requested." << '\n' <<
             "This input cannot be < 1 ." << '\n' <<
             "e.g: 3 hello world" << endl;
        return 0;
    }

    if (!structCall(argc, argv))   // call struct call and end the program if
        return 0;                  // the argument is not ok

    boundCall(argc, argv);       // call bound call to print the argument again
}