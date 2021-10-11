#include "main.ih"

// extract a requested argument and print is num and value
void boundCall(int argc, char *argv[])
{
    printArgument(combine(argc, argv));
}