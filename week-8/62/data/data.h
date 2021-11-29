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

    static void (Data::*s_destroy[])();
    static void (Data::*s_copy[])(Data const &other);
    static void (Data::*s_swap[][3])(Data &other);

public:
    Data(Data const &other) = delete;
    ~Data();

    Data(double *const num[10]);
    Data(std::string const word);
    Data(size_t const value);

    Data(Data const &other, Type type);
    Data(Data &&tmp, Type type);

    double * const *number() const;
    std::string const word() const;
    size_t const value() const;

    void destroyDouble();
    void destroyWord();
    void destroyValue();
    void destroy(Type type);

    void copyDouble(Data const &other);
    void copyWord(Data const &other);
    void copyValue(Data const &other);
    void copy(Type type, Data const &other);

    void swap(Type current, Data &other, Type next);
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