#include "data.ih"

void Data::display() const
{
    d_pimpl->display(); // call member using pimpl approach
}
