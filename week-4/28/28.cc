#include <iostream>
#include "line.h"

using namespace std;

int main()
{
    Line line;
    line.getLine();
    cout << "Next word: " << line.next() << '\n';
    cout << "Next word: " << line.next() << '\n';
    cout << "Next word: " << line.next() << '\n';
    cout << "Next word: " << line.next() << '\n';
}