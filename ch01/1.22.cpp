#include <iostream>
#include "Sales_item.h"
#include "Version_test.h"

int main() 
{
	Sales_item sum, item;
	while (std::cin >> item) {
		if (sum.isbn() == item.isbn()) {
			sum += item;
		}
		else {
			std::cout << sum << std::endl;
			sum = item;
		}
	}
	std::cout << sum << std::endl;
	return 0;
}
