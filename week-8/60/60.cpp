#include <iostream>

using namespace std;

class Demo
{
    size_t d_size;
    int* d_ptr;

public:

    // Main constructor
    explicit Demo(size_t size)
    :
        d_size(size),
        d_ptr(new int[size])
    {
        cout << "Default constructor called" << endl;
    }

    // Destructor
    ~Demo()
    {
        std::cout << "Destructor called" << std::endl;
        delete[] d_ptr;

    }

    // Copy constructor
    Demo(Demo const &other)
    :
        d_size(other.d_size),
        d_ptr(new int[other.d_size])
    {
        cout << "Copy constructor called" << endl;

        for (size_t idx = 0; idx != d_size; ++idx)
            d_ptr[idx] = other.d_ptr[idx];
    }

    // Copy assignment operator
    Demo &operator=(Demo const &other)
    {
        cout << "Copy assignment operator called" << endl;

        Demo tmp { other };
        swap(tmp);
        return *this;
    }

    // Move constructor
    Demo(Demo &&other) noexcept
    :
        d_size(other.d_size),
        d_ptr(other.d_ptr)
    {
        cout << "Move constructor called" << endl;

        other.d_size = 0;
        other.d_ptr = 0;
    }

    Demo &operator=(Demo &&other) noexcept
    {
        cout << "Move assignment operator called" << endl;

        swap(other);
        return *this;
    }

    static Demo elision()
    {
        Demo tmp(1);
        return tmp;
    }

    static void factory()
    {
        Demo demo1(3), demo2(4), demo3(5);

        cout << "Copy elision: " << endl;
        Demo copied(elision()); // Copy elision

        cout << "Move constructor: " << endl;
        Demo moved(move(demo1)); // Move constructor

        cout << "Copy assignment: " << endl;
        demo1 = demo2; // Copy assignment

        cout << "Move assignment: " << endl;
        demo2 = move(demo3); // Move assignment

    }

private:

    void swap(Demo &other)
    {
        ::swap(d_size, other.d_size);
        ::swap(d_ptr, other.d_ptr);
    }
};

int main() {

    Demo::factory();
}
