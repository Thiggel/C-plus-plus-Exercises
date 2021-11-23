#ifndef DEMO_H
#define DEMO_H
// https://www.geeksforgeeks.org/copy-elision-in-c/
// https://en.wikipedia.org/wiki/Copy_elision
// https://stackoverflow.com/questions/12953127/what-are-copy-elision-and-return-value-optimization
class Demo
{


public:
    Demo(const char* str = "\0") //default constructor
    {
        cout << "Constructor called";
    }

    Demo(const Demo &demo)  //copy constructor
    {
        cout << "Copy constructor called";
    }

    Demo(const Demo &&demo) //move constructor
    {
        cout << "Move constructor called";
    }
    ~Demo()
    {
        cout << "Destructor called";
    }

    Demo &operator=(Demo const &rvalue);   // from slides "ClassName &operator=(ClassName const &rvalue);"
};
#endif