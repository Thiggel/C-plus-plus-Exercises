#include "person.ih"


void Person::insert(ostream &outStream) const
{
    outStream << "Name    : " << name() << '\n' <<
              "Address : " << address()  << '\n' <<
              "Phone   : " << phone()    << '\n' <<
              "Mass    : " << mass()   << '\n';

}
