#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include <string>
#include <iostream>

#include "../enum/enum.h"
#include "../value/value.h"

class Tokenizer
{
    std::istream &d_in;

    std::string d_ident;
    Value d_value;
    int d_ch;                       // last read character

    public:
        Tokenizer(std::istream &in = std::cin);

        Token nextToken();

        void error();               // set d_token to ERROR

        Token token() const;
        std::string const &ident() const;
        Value value() const;

        char charValue() const;
        int intValue() const;
        double doubleValue() const;

        
        void reset();

    private:
        Token identifier();
        Token intOrDouble();
};

inline void Tokenizer::error()
{
    d_value.requireSpecial(ERROR);
}

inline char Tokenizer::charValue() const
{
    return d_value.charValue();
}
        
inline int Tokenizer::intValue() const
{
    return d_value.intValue();
}
        
inline double Tokenizer::doubleValue() const
{
    return d_value.doubleValue();
}
        

inline Token Tokenizer::token() const
{
    return d_value.token();
}
        
inline std::string const &Tokenizer::ident() const
{
    return d_ident;
}

inline Value Tokenizer::value() const
{
    return d_value;
}
        
#endif








