#include "main.ih"

Action CharCount::CharInfo::locate(char const &c)
{
    for (size_t index = 0; index < nCharObj; ++index)
    {
        if (ptr[index].d_ch == c)
            return
            {
                    Action::Choice::INC, &ptr[index]
            };

        else if (ptr[index].d_ch < c)
            return
            {
                    Action::Choice::INSERT, &ptr[index]
            };
    }

    return
    {
            Action::Choice::APPEND, &ptr[nCharObj]
    };
}