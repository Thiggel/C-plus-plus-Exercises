#include <iostream>

std::string const &Person::name() const
{
    return d_name;
}
std::string const &Person::address() const
{
    return d_address;
}
std::string const &Person::phone() const
{
    return d_phone;
}
size_t Person::mass() const
{
    return d_mass;
}

void printPerson(Person const &p)
{
    std::cout << "Name    : " << p.name() << "\n" <<
         "Address : " << p.address()  << "\n" <<
         "Phone   : " << p.phone()    << "\n" <<
         "Mass  : " << p.mass()   << '\n';
}