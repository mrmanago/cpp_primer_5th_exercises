#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct Person 
{
    string name;
    string address;
};

int main()
{
    Person bf;
    bf.name = "Eddie";
    bf.address = "333";

    cout << bf.name << " " << bf.address << endl;

    return 0;
}