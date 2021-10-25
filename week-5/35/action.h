#ifndef _ACTION_H_
#define _ACTION_H_

#include <iostream>

struct Action
{
    enum struct Choice
    {
        APPEND,
        INSERT,
        INC
    };

    Choice choice;
    Char *ptr;
};


#endif