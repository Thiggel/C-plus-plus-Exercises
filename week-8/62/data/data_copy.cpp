#include "data.ih"

Data::Data(Data const &other, Type type)
{
    copy(type, other);
}