#include <iostream>
#include "Sales_item.h"
#include "Version_test.h"

int main() 
{
    Sales_item item;
    while (std::cin >> item)
        std::cout << item << std::endl;
    return 0;
}
