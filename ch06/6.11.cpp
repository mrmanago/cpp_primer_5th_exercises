#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void reset(int&);

int main()
{
    int x = 5;
    cout << x << endl;
    reset(x);
    cout << x << endl;

    return 0;
}

void reset(int& i)
{
    i = 0;
}