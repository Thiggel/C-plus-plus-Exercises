#include <iostream>
#include <fstream>
#include <cstring>

#include "main.ih"

// A: 00
// T: 01
// G: 10
// C: 11

// isalpha

int main(int argc, char **argv)
{
    bool binary = false;

    string inFileName,
           outFileName;

    for (size_t index = 1; index < static_cast<size_t>(argc); ++index)
    {
        if (strcmp(argv[index], "-b") == 0)
            binary = true;

        else if (inFileName.compare("") == 0)
            inFileName = argv[index];

        else
            outFileName = argv[index];
    }

    ifstream inputFile;
    ofstream outputFile;

    inputFile.open (inFileName);
    outputFile.open (outFileName);

    string line;
    while ( getline (inputFile,line) )
    {
        string writeLine;
        for(int idx = 0; idx < line.length(); idx++)  // segmentation error
        {
            if (line.at(idx) == 'A')
                writeLine.append("00");
            if (line.at(idx) == 'T')
                writeLine.append("01");
            if (line.at(idx) == 'G')
                writeLine.append("10");
            if (line.at(idx) == 'C')
                writeLine.append("11");
        }
        outputFile << writeLine << '\n';

    }

    inputFile.close();
    outputFile.close();
}