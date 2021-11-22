#include "../data.h"

#include <string>

class DataWrapper
{
    Data::Field d_field;
    Data d_union;

public:
    DataWrapper(double value = 0);
    DataWrapper(size_t value = 0);
    DataWrapper(std::string const &text);

    DataWrapper(DataWrapper const &other);
    DataWrapper(DataWrapper &&tmp);

    ~DataWrapper();

    Data::Field field() const;
};