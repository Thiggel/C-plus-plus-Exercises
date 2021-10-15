#include "data.ih"

bool Data::read()
{   
    return d_pimpl->read(); // call member using pimpl approach
}
