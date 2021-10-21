#ifndef SYMBOL_HEADER
#define SYMBOL_HEADER

#include "../enum/enum.h"
#include "../symbolOrder/symbolOrder.h"
#include "../value/value.h"
#include <string>

class Symbol
{
    std::string d_name;                     // the symbol identifier
    Value d_value;                          // the value of the symbol

public:
    Symbol(std::string name, double val);
    Symbol(std::string name, int val = 0);

    double doubleValue();                   // get value if it contains double
    int intValue();                         // get value if it contains int
    Token type();                           // get type, e.g. INT/DOUBLE
    Value value();                          // get complete Value object
    std::string ident();

    SymbolOrder compare(std::string ident); // lex-compare to other symbol
    void assign(Value const &value);        // assign new value to symbol
};

#endif
