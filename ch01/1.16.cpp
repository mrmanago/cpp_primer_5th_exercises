#include <iostream>

int main() 
{
    std::cout << "Enter numbers to sum up: " << std::endl;
    int sum = 0, val = 0;
    while (std::cin >> val)
        sum += val;
    std::cout << "The sum of the numbers is: " << sum << std::endl;
    return 0;
}
