#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Please enter two integers: " << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    int quotient = v1 / v2;
    cout << quotient << endl;

    return 0;
}