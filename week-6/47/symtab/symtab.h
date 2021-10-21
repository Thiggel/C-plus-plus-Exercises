#ifndef SYMTAB_HEADER
#define SYMTAB_HEADER

#include "../symbolOrder/symbolOrder.h"
#include "../symbol/symbol.h"
#include <string>

class Symtab
{
    size_t d_capacity;                // already allocated capacity
    size_t d_size;                    // number of symbols saved
    Symbol **d_table;                 // array of pointers to symbols

public:
    Symtab();
    ~Symtab();

    Symbol &find(std::string ident);  // find or insert
    size_t findIdx(std::string ident);
    size_t size();
    Symbol &at(size_t index);         // get element at position
    Symbol &at(size_t index) const;

private:
    void resize();                    // reallocate memory
    void destroy();                   // deallocate memory
    void shift(size_t index);         // shift all elements to the right
    void insert(                      // insert at position (possibly shift)
      std::string ident,
      size_t pos
    );

    struct Return {                   // used for binary search
        bool found;                   // if found -> index is pos of el
        size_t index;                 // if not found -> index is pos for
    };                                // insert

    Return binarySearch(std::string el, size_t begin, size_t end);
};

#endif