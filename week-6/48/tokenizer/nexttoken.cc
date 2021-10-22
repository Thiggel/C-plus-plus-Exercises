#include "tokenizer.ih"

Token Tokenizer::nextToken()
{
    if (d_value.token() == CHAR && d_value.charValue() == '\n')
        return CHAR;

    while (true)
    {
        d_ch = cin.get();

        if (d_ch == EOF)
            return QUIT;

        if (isalpha(d_ch) or d_ch == '_')
            return identifier();

        if (isdigit(d_ch) or d_ch == '.')                // and maybe also a '.'
            return intOrDouble();

        if (d_ch != '\n')
        {
            if (isspace(d_ch) or not isprint(d_ch))
                continue;
        }

        d_value.charValue(d_ch);
        return CHAR;
    }    
}


