#include <iostream>
#include <typeinfo>

int main()
{
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;

	std::cout << "j is " << typeid(j).name() << std::endl;
	std::cout << "k is " << typeid(k).name() << std::endl;
	std::cout << "p is " << typeid(p).name() << std::endl;
	std::cout << "j2 is " << typeid(j2).name() << std::endl;
	std::cout << "k2 is " << typeid(k2).name() << std::endl;	

	return 0;
}
