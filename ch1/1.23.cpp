#include <iostream>
#include "Sales_item.h"
#include "Version_test.h"

int main()
{
	Sales_item currItem, item;
	std::cin >> currItem;
	int count = 1;
	while (std::cin >> item) {
		if (currItem.isbn() == item.isbn()) {
			count++;
		}
		else {
			std::cout << currItem.isbn() << " " << count << std::endl;
			currItem = item;
			count = 1;
		}
		std::cout << currItem.isbn() << " " << count << std::endl;
	}

	return 0;
}
