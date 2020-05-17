#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int sum(int, int);

int main()
{
    typedef decltype(sum)* fp;
    vector<fp> vec = { 5, sum };
    int addend = 1;

    for (auto func : vec)
    {
        static int counter = 1;
        cout << func(counter, addend) << endl;
        ++counter;
    }

    return 0;
}

int sum(int x, int y)
{
    return x * y;
}