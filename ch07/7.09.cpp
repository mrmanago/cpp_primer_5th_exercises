#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::istream;
using std::ostream;

struct Person
{
    string firstName;
    string address;

    string name() const { return firstName; }
    string home() const { return address; }
};

istream &read(istream &is, Person &p)
{
    is >> p.firstName >> p.address;
    return is;
}

ostream &print(ostream &os, const Person &p)
{
    os << p.firstName << " " << p.address;
    return os;
}

int main()
{
    Person p;
    read(cin, p);
    print(cout, p);

    return 0;
}