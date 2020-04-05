#include <iostream>
#include <typeinfo>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;

	std::cout << a << typeid(a).name() << std::endl;
	std::cout << b << typeid(b).name() << std::endl;
	std::cout << c << typeid(c).name() << std::endl;
	std::cout << d << typeid(d).name() << std::endl;

	// They're all integers

	return 0;
}
