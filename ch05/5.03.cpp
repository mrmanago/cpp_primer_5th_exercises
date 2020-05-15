#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int sum = 0, val = 1;
    while (val <= 10)
        sum += val, ++val;
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;

    return 0;
}

// > Explain whether this rewrite improves or diminishes the readability of this code.
// I does in my opinion, I'd rather use a block instead of the comma operator.