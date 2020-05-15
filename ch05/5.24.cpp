#include <iostream>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;

int main()
{
    cout << "Please enter two integers: " << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    if (v2 == 0) {
        throw runtime_error("divisor is 0");
    }
    int quotient = v1 / v2;
    cout << quotient << endl;

    return 0;
}