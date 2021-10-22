//#define XERR
#include "tokenizer.ih"

Token Tokenizer::identifier()
{
    d_value.requireSpecial(IDENT);

    d_ident = d_ch;

    while (true)
    {
        d_ch = cin.get();
        if (d_ch == EOF)
            break;

        if (isalnum(d_ch) or d_ch == '_')
        {
            d_ident += d_ch;
            continue;
        }

        d_in.unget();
        break;
    }

    if (d_ident == "quit")
        d_value.requireSpecial(QUIT);

    return d_value.token();
}
