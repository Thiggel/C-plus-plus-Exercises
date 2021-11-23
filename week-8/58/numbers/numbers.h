#ifndef NUMBERS_H
#define NUMBERS_H

#pragma once
#include <iostream>

class Numbers{

private:
    int *d_storage;
    size_t d_count;

    void deleteEntryObjects();

public:
    explicit Numbers(size_t count);
    Numbers(size_t count, int value);

    Numbers(Numbers const &numbers);           //copy constructor
    Numbers &operator=(Numbers const &numbers);//copy assignment

    Numbers(Numbers &&numbers) noexcept;     //move constructor
    Numbers &operator=(Numbers &&numbers) noexcept;

    void swap(Numbers &other);

    void at(int index, int value);
    void write();

    ~Numbers();
};

#endif
