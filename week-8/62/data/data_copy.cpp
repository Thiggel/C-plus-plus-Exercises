#include "data.ih"

Data::Data(Data const &other, Field type)
{
    (this->*s_copy[type])(other);
}