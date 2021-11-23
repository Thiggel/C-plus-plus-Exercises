#include <iostream>

using namespace std;

int main() {

    Numbers temp {3};

    cout << "init object: " << endl;
    temp.write();
    cout << endl;

    Numbers copied { temp };

    Numbers moved { move(temp)};

    cout << "copied object:" << endl;
    copied.write();
    cout << endl;

    cout << "old object: ";
    temp.write();
    cout << endl;

    cout << "moved object: " << endl;
    moved.write();
    cout << endl;

    return 0;
}
