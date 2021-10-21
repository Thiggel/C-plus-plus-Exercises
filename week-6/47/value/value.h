#ifndef VALUE_HEADER
#define VALUE_HEADER

#include "../enum/enum.h"
#include <iostream>

class Value
{
    Token d_token;
    
    union                                   // can only be either one of these
    {
        double u_double;
        int u_int;
        char u_char;
    };
    
public:
    Value(double val);
    Value(int val = 0);
    Value(char val);
    Value(size_t index, Token type = IDENT);
    
    int intValue();
    void intValue(int val);
    
    double doubleValue();
    void doubleValue(double val);
    
    char charValue();
    void charValue(char val);
    
    Token token() const;
    
    void requireSpecial(Token token);         // assert special token type
};

#endif
