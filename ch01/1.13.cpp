#include <iostream>

int main()
{
    // rewritten 1.09
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;
    std::cout << sum << std::endl;

    // rewritten 1.10
    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;

    // rewritten 1.11
    std::cout << "Please enter two numbers starting from smallest: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    for (int i = v1; i <= v2; ++i)
        std::cout << i << std::endl;

    return 0;
}
