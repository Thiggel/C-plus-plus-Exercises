#include <iostream>
#include "numbers/numbers.h"

using namespace std;

int main()
{
    
    Numbers temp (3), demo2(5);

    Numbers copied(temp);

    copied.write();
    cout << endl;

    Numbers moved(move(copied));

    moved.write();
    cout << endl;

    temp = demo2;
    temp.write();
    cout << endl;

    temp = move(moved);
    temp.write();
    cout << endl;


}
