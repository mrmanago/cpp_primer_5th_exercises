// > In the following code, determine the type of each variable and the value each variable has when the code finishes:

#include <iostream>
#include <typeinfo>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;
	std::cout << a << typeid(a).name() << std::endl; 
	std::cout << b << typeid(b).name() << std::endl;
	std::cout << c << typeid(c).name() << std::endl; // `c` is an `int`
	std::cout << d << typeid(d).name() << std::endl; // `d` is an `int&`

	return 0;
}
