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
    // try converting next substring to double
    return convert(dest, d_line.next());
}

bool Parser::isIntegral()
{
    // return true if last read number is
    // integral
    return d_isIntegral;
}

Parser::Return Parser::convert(double *dest, std::string const &str)
try
{
    return pureDouble(dest, str) ? NUMBER : NO_NUMBER;
}
// conversion failed
catch (const std::exception& e)
{
    return NO_NUMBER;
}

bool Parser::pureDouble(double *dest, std::string const &str)
{
    // save position after conversion to see if all
    // characters of the string were used
    size_t posAfterConversion = 0;

    // try converting
    double temp = std::stod(str, &posAfterConversion);

    // success if all characters were used
    if (posAfterConversion == str.length())
    {
        // save the converted number in the destination
        *dest = temp;

        // check if it is a number, and it doesn't
        // contain '.', 'e' or 'E'
        if (
            str.find('.') == std::string::npos &&
            str.find('e') == std::string::npos &&
            str.find('E') == std::string::npos
        )
            // if so save that it is an integral value
            d_isIntegral = true;

        return true;
    }

    // not all characters were used
    return false;
}