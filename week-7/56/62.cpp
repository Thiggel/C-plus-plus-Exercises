#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    bool binary = false;

    string  input,
            output;

    for (size_t index = 1; index < static_cast<size_t>(argc); ++index)
    {
        if (strcmp(argv[index], "-b") == 0)
            binary = true;

        else if (input.compare("") == 0)
            input = argv[index];

        else
            output = argv[index];
    }

    ifstream inputStream{ input };
    ofstream outputStream{ output };

    string *letterCodes = { "A", "T", "G", "C" };
    string *binaryCodes = { "00", "01", "10", "11" };

    if (binary)
    {
        while (string ch = inputStream.get())
        {
            if (ch.find("10"))
                return 0;

            int pos = find(letterCodes, letterCodes + 4, ch);
            outputStream << binaryCodes[pos];
        }
    }
    else
    {
        while (string ch = inputStream.get() + inputStream.get())
        {
            if (ch.find("ATGC"))
                return 0;

            int pos = find(binaryCodes, binaryCodes + 4, ch);
            outputStream << letterCodes[pos];
        }
    }
}