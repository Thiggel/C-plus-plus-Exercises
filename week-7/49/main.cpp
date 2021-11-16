#include "main.ih"

int main(int argc, char **argv)
{
    for(
        size_t numIt = static_cast<size_t>(stoi(argv[1]));
        numIt > 0;
        --numIt
    )
    {
        ostream out(cout.rdbuf());

        out.setstate(ios::failbit);

        //if (out.good())
            out << "Nr. of command line arguments " << argc << '\n';
    }
}