#include "person.ih"
#include <iostream>

void Person::setPhone(std::string const &phone)
{
    if (phone.empty())
        d_phone = " - not available -";
    else if (hasOnly("0123456789", phone))
        d_phone = phone;
    else
        std::cout << "A phone number may only contain digits\n";
}

