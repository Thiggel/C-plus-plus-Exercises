#include "main.ih"

extern char **environ;

int main(int argc, char **argv)
{
    cout << "Default constructor: " << endl;
    Strings env(argc, argv);
    env.write();

    Strings temp, demo, copied(env);

    cout << "Copy constructor: " << endl;
    copied.write();

    cout << "Move constructor: " << endl;
    Strings moved(move(env));
    moved.write();

    cout << "Copy assignment: " << endl;
    temp = moved;
    temp.write();

    cout << "Move assignment: " << endl;
    demo = move(temp);
    demo.write();
}