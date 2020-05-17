#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int sum(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main()
{
    typedef decltype(sum)* fp;
    vector<fp> arithmetic_vec = { sum, subtract, multiply, divide };

    for (auto arithmetic_operator : arithmetic_vec)
    {
        cout << arithmetic_operator(10, 10) << endl;
    }
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return y != 0 ? x / y : 0;
}