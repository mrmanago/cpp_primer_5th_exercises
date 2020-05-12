// Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression `i = x` is `int&`. Using that knowledge, determine the type and value of each variable in this code:

#include <iostream>
#include <typeinfo>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;

	std::cout << a << typeid(a).name() << std::endl;
	std::cout << b << typeid(b).name() << std::endl;
	std::cout << c << typeid(c).name() << std::endl; // is an `int`
	std::cout << d << typeid(d).name() << std::endl; // is an `int&`

	// They're all integers

	return 0;
}
