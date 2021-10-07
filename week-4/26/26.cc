#include "person.h"
#include "accessor.h"
#include "constructor.h"

using namespace std;

int main(int argc, char *argv[]) //TODO add ostream and istream requirements
{
    Person karel{ "Karel", "Rietveldlaan 37", "542 6044", 70 };
    Person anon;

    printPerson(karel);

    return 0;
}