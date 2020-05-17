#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct Person 
{
    string name() const { return firstName; }
    string home() const { return address; }
    string firstName;
    string address;
};

int main()
{
    Person bf;
    bf.firstName = "Eddie";
    bf.address = "333";

    cout << bf.name() << endl;
    cout << bf.home() << endl;

    return 0;
}

// From adobrich
// If we define these member functions to be const both a const Person and a Person(non const) can utilise them. Having const member functions effectively increases their flexibility.