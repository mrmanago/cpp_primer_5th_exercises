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

int fact(int);

int main()
{
    cout << fact(5) << endl;

    return 0;
}

int fact(int val) {
    int ret = 1;
    while (val > 1) {
        ret *= val;
        --val;
    }
    return ret;
}