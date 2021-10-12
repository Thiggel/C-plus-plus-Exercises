#include "person.ih"
#include <iostream>

void Person::insert(const Person &p)
{
    std::cout << "Name    : " << p.name() << "\n" <<
              "Address : " << p.address()  << "\n" <<
              "Phone   : " << p.phone()    << "\n" <<
              "Mass  : " << p.mass()   << '\n';
}