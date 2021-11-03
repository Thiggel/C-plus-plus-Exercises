#include "charCount.ih"

void CharCount::process(char ch)
{
    CharIndex chi{};
    chi.idx = locate(&chi.idx, ch);
    chi.ch = ch;

    (this->*d_CharPtr)(chi);
}