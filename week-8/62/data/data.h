#include <string>

union Data
{
    enum Type
    {
        DOUBLE,
        WORD,
        VALUE
    };

private:
    double *u_double[10];
    std::string u_word;
    size_t u_value;

public:
    Data(Data const &other) = delete;
    ~Data();

    Data(double *num[10]);
    Data(std::string word);
    Data(size_t value);

    Data(Data const &other, Field type);
    Data(Data &&tmp, Type type);

    static void (Data::*s_destroy[])();
    destroyDouble();
    destroyValue();
    destroyWord();
    destroy(Type type);

    static void (Data::*s_copy[])(Data const &other);
};