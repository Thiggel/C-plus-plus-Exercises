#include "main.ih"

Action CharCount::CharInfo::locate(char const &c, Char *ptrC)
{
    if (ptrC == nullptr)
        return {
            Action::Choice::APPEND, ptrC
        };

    else if (ptrC->d_ch < c)
        return {
            Action::Choice::INSERT, ptrC
        };

    else if (ptrC->d_ch == c)
        return {
            Action::Choice::INC, ptrC
        };

    return locate(c, ptrC + 1);
}