#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::runtime_error;

int abs(int);

int main()
{
    cout << abs(-5) << " " << abs(6) << " " << abs(0) << endl;

    return 0;
}

int abs(int v) {
    if (v < 0) {
        return v * -1;
    } else {
        return v;
    }
}