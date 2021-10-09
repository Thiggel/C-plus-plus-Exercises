#include "line.ih"

Line::Line()
{
    // initialize position as first element
    pos = 0;
}

bool Line::getLine()
{
    // read input line
    if (!std::getline(std::cin, line))
        // abort if not read
        return false;

    // Loop for each character in string
    for (char index : line)
        // Return true if ws-char is found
        if (!std::isspace(index))
            return true;

    // Return false otherwise
    return false;
}

std::string Line::next()
{
    // no substring left
    if (pos == std::string::npos)
        // return empty string
        return "";

    // set substring empty
    subStr = "";

    // until next space
    while (
        std::isalnum(line[pos]) ||
        std::ispunct(line[pos])
    )
    {
        // add characters to subStr
        subStr += line[pos];
        // remove character from line
        ++pos;
    }

    // go to next start of word
    while (std::isspace(line[pos]))
        ++pos;

    // set pos to -1 when line ends
    if (pos >= (line.length() - 1))
        pos = std::string::npos;

    // return new substring
    return subStr;
}