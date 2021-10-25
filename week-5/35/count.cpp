#include "main.ih"

size_t CharCount::count(std::istream &inStream)
{
    char c;

    while(inStream.get(c))
    {
        auto [action, ptr] = info.locate(c);

        switch(action)
        {
            case Action::Choice::INC:
                info.increment(ptr);
            case Action::Choice::INSERT:
                info.insert(c,ptr);
        }


    }

}