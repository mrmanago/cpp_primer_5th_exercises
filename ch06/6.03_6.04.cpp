#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int fact(int val)
{
    if (val == 1) {
        return 1;
    }
    return val * fact(val - 1);
}

int main()
{
    cout << "Enter an integer to factorialize: " << endl;
    int n;
    cin >> n;
    cout << n << "! is " << fact(n) << endl;

    return 0;
}