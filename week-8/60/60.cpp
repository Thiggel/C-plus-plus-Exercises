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

    }

    // Copy constructor
    Demo(Demo const &other)
    :
    d_size(other.d_size),
    d_ptr(new int[other.d_size])
    {
        cout << "Copy constructor called" << endl;

        copy(other.d_ptr, other.d_ptr + d_size, d_ptr);
    }

    // Copy assignment operator
    Demo &operator=(Demo const &other)
    {

        cout << "Copy assignment operator called" << endl;

        delete[] d_ptr;

        d_size = other.d_size;
        d_ptr = new int[d_size];
        copy(other.d_ptr, other.d_ptr + d_size, d_ptr);

        return *this;
    }

    // Move constructor
    Demo(Demo &&other) noexcept
    :
    d_size(other.d_size),
    d_ptr(new int[other.d_size])
    {
        cout << "Move constructor called" << endl;

        other.swap(*this);
    }

    Demo &operator=(Demo &&other) noexcept
    {
        cout << "Move assignment operator called" << endl;

        delete[] d_ptr;
        other.swap(*this);

        return *this;
    }

    static void factory()
    {
        Demo demo1(3), demo2(4), demo3(5);

        Demo copied = demo1; // Copy elision

        Demo moved(move(demo1)); // Move constructor

        demo1 = demo2; // Copy assignment

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

    return 0;
}
