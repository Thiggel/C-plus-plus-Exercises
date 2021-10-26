#include "main.ih"

int main()
{
    string str1 = "Hello";
    string str2 = "my";
    string str3 = "name";
    string str4 = "is";
    string str5 = "Filipe";

    string *test[5] = {
        &str1, &str2, &str3, &str4, &str5
    };

    Sort sort = Sort(nocasedec);
    sort.sort(&test[0], 5);

    for (size_t i = 0; i < 5; ++i)
        cout << *test[i] << " ";
}