#include "main.ih"

#include <iostream>

PhoneBook::PhoneBook()                              // the constructor
{                                                   // initializes the
    s_finder.insert( "Frank",  "06 5353 2509" );    // finder with 2
    s_finder.insert( "Jurjen", "06 2327 9985" );    // phone nrs.
}
