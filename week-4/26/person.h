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
    bool hasOnly(char const *characters, std::string const &object);

    void insert(std::ostream &outStream) const;
    void extract(std::istream &inStream);

    std::string const &name() const;
    std::string const &address() const;
    std::string const &phone() const;
    size_t mass() const;

};

inline std::string const &Person::name() const
{
    return d_name;
}

inline std::string const &Person::address() const {
    return d_address;
}

inline std::string const &Person::phone() const {
    return d_phone;
}

inline size_t Person::mass() const {
    return d_mass;
}
#endif