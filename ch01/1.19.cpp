#include <iostream>
#include <cstdlib>

int main() 
{
    std::cout << "Please enter two values: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    int distance = abs(v1 - v2);

    if (v1 >= v2) {
        for (int i = v2; i <= v1; i++)
            std::cout << i << std::endl;
    }
    else {
        for (int i = v1; i <= v2; i++)
            std::cout << i << std::endl;
    }

    return 0;
}
