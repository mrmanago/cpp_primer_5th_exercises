#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::istream;
using std::ostream;

struct Person;
istream &read(istream&, Person&);

struct Person
{
    Person() = default;
    Person(const string &s): firstName(s) { }
    Person(const string &s, string a) : firstName(s), address(a) { }
    Person(istream &is) { read(is, *this); }

    string firstName;
    string address;

    string name() const { return firstName; }
    string home() const { return address; }
};

istream &read(istream &is, Person &person)
{
    is >> person.firstName >> person.address;
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
    print(cout, p) << endl;

    return 0;
}