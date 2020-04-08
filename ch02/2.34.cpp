#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;	// int
	auto c = cr;	// int
	auto d = &i;	// int* (Reference of an integer object is an integer pointer)
	auto e = &ci;	// const int* (Reference of a const object is a low-level const)
	auto &g = ci;	// const int&. Another name for ci 

	std::cout << a << std::endl;
	a = 42;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	b = 42;
	std::cout << b << std::endl;

	std::cout << c << std::endl;
	c = 42;
	std::cout << c << std::endl;

	//std::cout << d << std::endl;
	//d = 42;		// a value of type cannot be assigned to an entity of type
	//std::cout << d << std::endl;

	//std::cout << e << std::endl;
	//e = 42;		// a value of type cannot be assigned to an entity of type
	//std::cout << e << std::endl;

	//std::cout << g << std::endl;
	//g = 42;			// ci is a constant and cannot be changed.
	//std::cout << g << std::endl;

	return 0;
}
