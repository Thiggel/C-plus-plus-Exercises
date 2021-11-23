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

    Data(const double *num[10]);
    Data(const std::string word);
    Data(const size_t value);

    Data(Data const &other, Field type);
    Data(Data &&tmp, Type type);

    double number() const;
    std::string word() const;
    size_t value() const;

    static void (Data::*s_destroy[])();
    destroyDouble();
    destroyWord();
    destroyValue();
    destroy(Type type);

    static void (Data::*s_copy[])(Data const &other);
    copyDouble();
    copyWord();
    copyValue();

    void swap(Field current, Union &other, Field next);
    static void (Data::*s_swap[][3])(Data &other);
    void swap2Double(Data &other);
    void swap2Word(Data &other);
    void swap2Value(Data &other);
    void swapDoubleWord(Data &other);
    void swapDoubleValue(Data &other);
    void swapWordDouble(Data &other);
    void swapWordValue(Data &other);
    void swapValueDouble(Data &other);
    void swapValueWord(Data &other);
};