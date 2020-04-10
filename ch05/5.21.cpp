#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
    cout << "Please enter two integers: " << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    int quotient = v1 / v2;
    cout << quotient << endl;

    return 0;
}