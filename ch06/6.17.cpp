#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool hasUpperCase(const string&);
void lowerCase(string&);

int main()
{
    cout << "Enter a string: " << endl;
    string str;
    cin >> str;

    if (hasUpperCase(str)) {
        cout << str << " has an uppercase letter." << endl;
    } else {
        cout << str << " does not have an uppercase letter." << endl;
    }
    cout << str << " -> ";
    lowerCase(str);
    cout << str << endl;

    return 0;
}

bool hasUpperCase(const string& s)
{
    for (auto &c : s) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

void lowerCase(string& s)
{
    for (auto& c : s) {
        c = tolower(c);
    }
}

// They do not have the same type because one the string must change
// and the other does not.