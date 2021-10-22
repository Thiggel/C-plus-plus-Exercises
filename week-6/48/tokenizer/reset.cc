#include "tokenizer.ih"

void Tokenizer::reset()
{
    if (d_ch != '\n')
    {
        string line;
        getline(d_in, line);
    }

    d_value.requireSpecial(QUIT);
}
