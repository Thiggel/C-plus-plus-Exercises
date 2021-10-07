#include <string>

class Person
{
    std::string d_name;         // name of person
    std::string d_address;      // address field
    std::string d_phone;        // telephone number
    size_t      d_mass;         // the mass in kg.

public:
    Person();
    Person(std::string const &name,
           std::string const &address = "--unknown--",
           std::string const &phone,
           size_t mass = 0);
    void setName(std::string const &name);
    void setAddress(std::string const &address);
    void setPhone(std::string const &phone);
    void setMass(size_t mass);
    static bool hasOnly(char const *characters, std::string const &object);
    void insert(std::ostream &info);

    std::string const &name()    const;
    std::string const &address() const;
    std::string const &phone()   const;
    size_t mass()                const;
};