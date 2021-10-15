#ifndef EXERCISES_DATAIMP_H
#define EXERCISES_DATAIMP_H

#include <string>

class DataImp
{
    std::string d_text;
    int d_value = 0;

    public:
        bool read();
        void display() const;
};

#endif
