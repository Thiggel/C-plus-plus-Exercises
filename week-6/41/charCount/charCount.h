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

private:
    enum Action
    {
        APPEND,
        INSERT,
        INC
    };

    CharInfo d_info = { 0 , 0, 8};

    typedef char ch, size_t idx, call;

public:
    CharCount(char ch);
    size_t count(std::istream &in);
    CharInfo const &info() const;

private:
    Char process(char ch);
    Action locate(size_t *idx, char ch) const;
    void inc(char ch, size_t idx) const;
    void insert(char ch, size_t idx);
    void append(char ch, size_t idx);            // in fact:insert at d_nfo.nCharObj

    void transfer(Char *dest, size_t begin, size_t end);

    size_t capacity();
    Char *enlarge(Char *old) const;
    Char rawCapacity();

    Char (CharCount::*d_CharPtr)(char ch);
    static Char (CharCount::*s_CharPtr[])(char ch);

};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}


#endif