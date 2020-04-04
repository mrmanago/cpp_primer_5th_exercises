#include <iostream>

int main()
{
	int v1 = 4, v2 = 3;
	int *ip = &v1;
	std::cout << *ip << " " << v1 << " " << v2 << std::endl;

	ip = &v2;
	std::cout << *ip << " " << v1 << " " << v2 << std::endl;

	v2 = 5;
	std::cout << *ip << " " << v1 << " " << v2 << std::endl;

	return 0;
}
