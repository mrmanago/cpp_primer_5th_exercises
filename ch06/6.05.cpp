#include <iostream>

using std::cout;
using std::endl;

int absoluteValue(int n) {
    if (n >= 0) {
        return n;
    } else {
        return -n;
    }
}

double absoluteValue(double n) {
    if (n >= 0) {
        return n;
    } else {
        return -n;
    }
}

int main()
{
    cout << absoluteValue(-5) << endl;
    cout << absoluteValue(-5.01) << endl;
    return 0;
}