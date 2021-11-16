#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;
using std::chrono::system_clock;
using std::chrono::time_point;

ostream &now(ostream &out)
{
    time_point<system_clock> const tp = system_clock{}.now();// correct format
    time_t secs = system_clock::to_time_t(tp);               // to seconds
    return out << put_time(localtime(&secs), "%c");
}

int main()
{
    cout << now << '\n';
}