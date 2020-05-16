#include <iostream>
#include "Chapter6.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Enter an integer to factorialize: " << endl;
    int n;
    cin >> n;
    cout << n << "! is " << fact(n) << endl;

    return 0;
}