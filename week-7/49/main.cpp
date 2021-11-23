#include "main.ih"

int main(int argc, char **argv)
{
    for (
        int numIt = 0;
        numIt < stoi(argv[1]);
        ++numIt
    )
    {
        ostream out(cout.rdbuf());

        out.setstate(ios::failbit);

        if (out.good())
            out << "Nr. of command line arguments " << argc << '\n';
    }
}
