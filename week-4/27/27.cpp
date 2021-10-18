#include "main.ih"
#include <iostream>

using namespace std;

int main()
{
    size_t size = 2;
    ostream &outStream = cout;
    istream &inStream = cin;

    Person persArray[size];

    readData(persArray, size, inStream);
    writeData(persArray, size, outStream);
}
