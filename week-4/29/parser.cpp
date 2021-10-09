#include "parser.ih"

Parser::Parser()
{
    d_line = Line();
}

bool Parser::reset()
{
    // read line and return true if success
    return d_line.getLine();
}

Parser::Return Parser::number(double *dest)
{
    // get next substring from line
    std::string next = d_line.next();

    // try converting to double
    return convert(dest, dline.next());

}

bool Parser::isIntegral()
{
    // return true if last read number is
    // integral
    return d_isIntegral;
}

Parser::Return Parser::convert(double *dest, string const &str)
try
{
    return pureDouble(dest, str) ? NUMBER : NO_NUMBER;
}
// conversion failed
catch ()
{
    return NO_NUMBER;
}

bool Parser::pureDouble(double *dest, std::string const &str)
{
    if (*dest = std::stod(str))
    {
        // check if it is a number, and it doesn't
        // contain '.', 'e' or 'E'
        if (
            !str.find('.') &&
            !str.find('e') &&
            !str.find('E')
        )
            // if so save that it is an integral value
            d_isIntegral = true;

        return true
    }

    return false;
}