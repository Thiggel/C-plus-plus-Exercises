#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size = 0;
    std::string *d_str = 0;

    size_t d_nIterations;

    void (Strings::*d_enlarge)();

public:
    Strings()   = default;

    Strings(int argc, char **argv);
    Strings(char **environLike);
    Strings(size_t nIterate, bool copy = true);

    ~Strings();

    size_t size() const;
    std::string const &at(size_t idx) const;    // for const-objects
    std::string &at(size_t idx);                // for non-const objects

    void add(std::string const &next);          // add another element

private:
    std::string &safeAt(size_t idx) const;      // private backdoor
    std::string *storageArea();
    void destroy();

    void enlargeByCopy();
    void enlargeByMove();
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}


#endif