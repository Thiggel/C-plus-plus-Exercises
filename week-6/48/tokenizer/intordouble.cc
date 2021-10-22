#include "tokenizer.ih"

Token Tokenizer::intOrDouble()
{
    string value(1, d_ch);

    bool hasDot = d_ch == '.';

    while (true)
    {
        d_ch = cin.get();

        if (d_ch == EOF)
            break;

        if (isdigit(d_ch))
        {
            value += d_ch;
            continue;
        }

        if (d_ch == '.' && not hasDot)
        {
            hasDot = true;
            value += '.';
            continue;
        }

        cin.unget();
        break;
    }

    if (not hasDot)
        d_value.intValue(stoi(value));
    else if (value != ".")
        d_value.doubleValue(stod(value));
    else
        d_value.charValue('.');

    return d_value.token();
}
