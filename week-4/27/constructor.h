
void Person::setName(std::string const &name)
{
    d_name = name;
}

void Person::setAddress(std::string const &address)
{
    d_address = address;
}


void Person::setMass(size_t mass)
{
    d_mass = mass;
}

bool Person::hasOnly(char const *characters, std::string const &object)
{
    // object only contains 'characters'
    return object.find_first_not_of(characters) == std::string::npos;
}

void Person::setPhone(std::string const &phone)
{
    if (phone.empty())
        d_phone = " - not available -";
    else if (hasOnly("0123456789", phone))
        d_phone = phone;
    else
        std::cout << "A phone number may only contain digits\n";
}

Person::Person()
{
    d_mass = 0;
}

Person::Person(std::string const &name, std::string const &address,
               std::string const &phone, size_t mass)
{
    d_name = name;
    d_address = address;
    setPhone(phone);
    d_mass = mass;
}

void Person::insert(std::ostream &info)
{

}

