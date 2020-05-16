#include <iostream>

using std::cout;
using std::endl;

int biggest(const int, const int* const);

int main()
{
    int n = 9;
    int p = 20;

    cout << biggest(n, &p) << endl;

    return 0;
}

int biggest(const int n, const int* const pi)
{
    if (n >= *pi) {
        return n;
    } else {
        return *pi;
    }
}