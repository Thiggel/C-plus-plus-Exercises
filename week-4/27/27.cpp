#include "main.ih"
#include <iostream>

using namespace std;

int main()
{
    size_t size = 1;

    streambuf *sbIn = cin.rdbuf();

    ostream oStream(streambuf *sbOut = cout.rdbuf());

    Person persArray[size];
    writeData(persArray, size, oStream());
    //readData(persArray, size, iStream(sbIn));

}
