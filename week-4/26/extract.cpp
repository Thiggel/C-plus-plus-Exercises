#include "person.ih"
#include <iostream>

void Person::extract(Person &p)
{
    std::string name;
    std::string address;
    std::string phone;
    std::string mass;

    getline(std::cin, name, ',');
    getline(std::cin, address, ',');
    getline(std::cin, phone, ',');
    getline(std::cin, mass);

    p.setName(name);
    p.setAddress(address);
    p.setPhone(phone);
    p.setMass(std::stoi(mass));
}