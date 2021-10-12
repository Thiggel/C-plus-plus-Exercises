#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
    std::string d_name;         // name of person
    std::string d_address;      // address field
    std::string d_phone;        // telephone number
    size_t      d_mass;         // the mass in kg.

public:
    Person();
    explicit Person(std::string const &name,
           std::string const &address = "--unknown--",
           std::string const &phone = "--unknown--",
           size_t mass = 0);
    void setName(std::string const &name);
    void setAddress(std::string const &address);
    void setPhone(std::string const &phone);
    void setMass(size_t mass);
    static void insert(const Person &p);
    static void extract(Person &p);

    std::string const name() const
    {
        return d_name;
    }
    std::string const &address() const
    {
        return d_address;
    }
    std::string const phone() const
    {
        return d_phone;
    }
    size_t mass() const
    {
        return d_mass;
    }

};

#endif