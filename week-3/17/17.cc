#include <iostream>

using namespace std;

int sum(int argc, char *argv[], int exampleNumber)		                        // sum two ints, overload by exampleNumber
{
	int sum = 0;
    for (int index = 0; index < argc; ++index)
        sum += stoi(argv[index]);                                           // add up all the elements of argv

    return sum;
}


double sum(int argc, char *argv[], double exampleNumber)	                    // sum two doubles, overload by exampleNumber
{
	double sum = 0;
    for (int index = 0; index < argc; ++index)
        sum += stod(argv[index]);                                           // add up all the elements of argv

    return sum;
}

bool containsDot(string num)                                                    // check if string contains a dot
{
    return num.find('.');                                                    // find a dot inside the string
}

int main(int argc, char *argv[])
{
	++argv;                                                                     // forget about the function name
	--argc;                                                                     // and decrement argc accordingly

    cout << sum(                                                                // call sum function
        argc,
        argv,
        any_of(argv, argv + argc, containsDot) ? 1.0 : 1     // conditionally have it sum doubles
    ) << '\n';

    // Note to grader: As you advised, I thought about whether I really need a third argument in both functions
    // And I came to the conclusion that it's the nicest way to do it since I then only need to do one function call
    // as seen above.
}
