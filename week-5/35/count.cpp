#include "main.ih"

size_t CharCount::count(std::istream &inStream)
{
    char c;

    while(inStream.get(c))
    {
        auto [choice, ptr] = info.locate(c, info.ptr);

        switch (choice)
        {
            case Action::Choice::INC:
                info.increment(ptr);
                break;
            case Action::Choice::INSERT:
                info.insert(c, &ptr);
                break;
            case Action::Choice::APPEND:
                cout << ptr << endl;
                info.append(c, &ptr);
                cout << ptr << endl << endl;
                break;
        }
    }
    return info.nCharObj;
}