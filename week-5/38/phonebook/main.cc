#include "main.ih"

PhoneBook phoneBook;        // the program defines a PhoneBook. By
                            // defining it as a global object all the 
                            // program's sources can directly reach it:
                            // see the 'extern' declaration in main.ih

int main()
{
    phoneBook = PhoneBook();

    string const *phone = phoneBook.get("Jurjen");      // request a nr
    cout << (phone == 0 ? "not available" : *phone) << '\n';

    phone = phoneBook.get("William");                   // request another nr
    cout << (phone == 0 ? "not available" : *phone) << '\n';
}

// outputs:
//      06 2327 9985
//      not available
