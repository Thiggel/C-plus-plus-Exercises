#include "person.ih"

void Person::extract(istream &inStream) {
    string mass;
    getline(inStream, d_name, ',');
    getline(inStream, d_address, ',');
    getline(inStream, d_phone, ',');
    getline(inStream, mass);
    d_mass = stoi(mass);
}
