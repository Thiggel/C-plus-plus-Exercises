#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
    float value = 12.08;



    cout <<
            "std display      '" << setw(15) << value << "'\n"

            "left aligned     '" << setw(15) << left << value << "'\n"

            "right aligned    '" << setw(15) << right << value << "'\n"

            "3 digits         '"
            << fixed << setw(15) << setprecision(1) << value << "'\n"

            "4-digit fraction '"
            << setw(15) << setprecision(4) << value << "'\n"

           "std display      '"
            << setw(15) << (std::ostringstream() << value).str() <<
            "'\n";
}