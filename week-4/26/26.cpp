#include "person.ih"

using namespace std;

int main(int argc, char *argv[])
{
    Person karel{ "Karel", "Rietveldlaan 37", "5426044", 70 };
    Person anon;

    Person::insert(karel);

    Person::extract(anon);
    Person::insert(anon);

    return 0;
}