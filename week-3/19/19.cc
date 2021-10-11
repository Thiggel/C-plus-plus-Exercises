#include "main.ih"

int main(int argc, char *argv[])
{
    if (argv[1][0] != '-')    // check for -w, -c, and -l as argument
        return 0;            // otherwise, the program was wrongly called

    switch (argv[1][1])
    {
        case 'c':
            numChars();
            break;
        case 'w':
            numWords();
            break;
        case 'l':
            numLines();
            break;
    }

    return 0;
}