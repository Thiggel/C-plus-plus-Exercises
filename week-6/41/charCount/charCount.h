#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>

struct CharCount            // struct, as CharCount defines public types
{
    struct Char
    {
        char ch;
        size_t count;

    };

    struct CharInfo
    {
        Char *ptr;
        size_t nCharObj;
        size_t capacity;
    };

    union CharIndex
    {
        char ch;
        size_t idx;
    };

private:
    enum Action
    {
        APPEND,
        INSERT,
        INC
    };

    CharInfo d_info = {0,0, 8};

public:
    size_t count(std::istream &in);
    CharInfo const &info() const;

private:
    void process(char ch);
    Action locate(size_t *idx, char ch) const;
    CharIndex inc(CharIndex chi);
    CharIndex insert(CharIndex chi);
    CharIndex append(CharIndex chi);            // in fact:insert at d_nfo.nCharObj

    static void transfer(Char *ptr, size_t begin, size_t end);

    Char *enlarge(Char *old);
    Char *rawCapacity();

    void test(CharIndex chi);

    CharIndex (CharCount::*d_CharPtr)(CharIndex chi);
    //static CharIndex (CharCount::*s_CharPtr[])(CharIndex chi);

};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}


#endif