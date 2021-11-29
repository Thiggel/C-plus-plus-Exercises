#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>

class Numbers{

private:

    size_t d_count;
    int *d_storage;

public:
    explicit Numbers(size_t count);
    Numbers(size_t count, int value);

    Numbers(Numbers const &numbers);           //copy constructor
    Numbers &operator=(Numbers const &numbers);//copy assignment

    Numbers(Numbers &&numbers) noexcept;     //move constructor
    Numbers &operator=(Numbers &&numbers) noexcept; //move assignment

    void swap(Numbers &other);

    void at(size_t index, int value);
    void write();

    size_t size();

    ~Numbers();
};

inline size_t Numbers::size()
{
    return d_count;
}

#endif
