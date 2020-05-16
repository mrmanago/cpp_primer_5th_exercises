#include <iostream>
#include <initializer_list>

using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> const&);

int main(void)
{
    auto il = { 1,2,3 };
    cout << sum(il) << endl;

    return 0;
}

int sum(initializer_list<int> const& il) {
    int sum = 0;
    for (auto i : il) {
        sum += i;
    }
    return sum;
}