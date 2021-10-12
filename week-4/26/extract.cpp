#include "person.ih"
#include <iostream>

void Person::extract()
{
    std::string name;
    std::string address;
    std::string phone;
    std::string mass;

    getline(std::cin, name, ',');
    getline(std::cin, address, ',');
    getline(std::cin, phone, ',');
    getline(std::cin, mass);

    setName(name);
    setAddress(address);
    setPhone(phone);
    setMass(std::stoi(mass));
}