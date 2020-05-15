#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string str1, str2;
    bool cont;
    do {
        cont = false;
        cout << "Please input 2 strings.\n";
        cin >> str1 >> str2;
        if (str1 == str2) {
            cout << "The strings are equal.\n";
        } else if (str1 < str2) {
            cout << str1 << " is less than " << str2 << ".\n";
        } else {
            cout << str2 << " is less than " << str1 << ".\n";
        }

        cout << "Continue? 'y'\n";
        char ans;
        cin >> ans;
        if (ans == 'y') {
            cont = true;
        }

    } while (cont);

    return 0;
}