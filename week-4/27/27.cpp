#include "main.ih"
#include <iostream>

using namespace std;

int main()
{
    size_t size = 5;
    ostream &outStream = cout;
    istream &inStream = cin;

    Person persArray[size];

    readData(persArray, size, inStream);
    writeData(persArray, size, outStream);
}
