#include "person.ih"

void Person::extract(istream &inStream)
{
    string name;
    string address;
    string phone;
    string mass;

    getline(inStream, name, ',');
    getline(inStream, address, ',');
    getline(inStream, phone, ',');
    getline(inStream, mass);

    setName(name);
    setAddress(address);
    setPhone(phone);
    setMass(stoi(mass));

    getline(cin, name);

}