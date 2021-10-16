#include "person.ih"

//Aux function to setPhone
bool Person::hasOnly(char const *characters, std::string const &object)
{
    // object only contains 'characters'
    return object.find_first_not_of(characters) == std::string::npos;
}