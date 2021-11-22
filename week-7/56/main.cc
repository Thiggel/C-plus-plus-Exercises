#include <iostream>
#include <fstream>
#include "main.ih"

// A: 00
// T: 01
// G: 10
// C: 11

// isalpha

int main(int argc, char **argv)
{
    string inFileName = "";
    string outFileName = "";
    cin >> inFileName;
    cin >> outFileName;

    ifstream inputFile;
    ofstream outputFile;

    inputFile.open (inFileName);
    outputFile.open (outFileName);
    string line;
    while ( getline (inputFile,line) )
    {
        string writeLine;
        for(char& nucleobase : line) {
            if (nucleobase == 'A')
                writeLine.append(00);
            if (nucleobase == 'T')
                writeLine.append(01);
            if (nucleobase == 'G')
                writeLine.append(10);
            if (nucleobase == 'C')
                writeLine.append(11);
        }
        outputFile << writeLine << '\n';

    }

    inputFile.close();
    outputFile.close();
}