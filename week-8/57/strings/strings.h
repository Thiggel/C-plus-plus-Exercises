#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>
#include <istream>

class Strings
{
    size_t d_size = 0;          // initial size ( = #strings)
    size_t d_capacity = 1;      // initial capacity (in raw memory)
    std::string *d_str;         // pointer to the string objects.

    public:
        Strings();
        Strings(int argc, char *argv[]);
        Strings(char **environLike);

        Strings(Strings const &other);
        Strings &operator=(Strings const &other);

        Strings(Strings &&other) noexcept;
        Strings &operator=(Strings &&other) noexcept;

        void swap(Strings &other);
        void write();

        ~Strings();

        size_t size() const;
        size_t capacity() const;
        std::string const &at(size_t idx) const;    // for const-objects
        std::string &at(size_t idx);                // for non-const objects

        void add(std::string const &next);          // add another element

        void resize(size_t newSize);
        void reserve(size_t newCapacity);
        
    private:
        std::string &safeAt(size_t idx) const;      // private backdoor
        std::string *storageArea();                 // to store the next str.
        void destroy();                 
        std::string *enlarged();                    // to d_capacity
        std::string *rawStrings(size_t nStrings);
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline size_t Strings::capacity() const     // potentially dangerous practice:
{                                           // inline accessors
    return d_capacity;
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

