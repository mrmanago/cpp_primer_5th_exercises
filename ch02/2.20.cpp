#include <iostream>

int main()
{
	int i = 42;		// Defines int i and assigns the value 42 to it
	int *p1 = &i;	// p1 points to i
	*p1 = *p1 * *p1;// i's value is changed to 1764

	std::cout << i << " " << *p1 << std::endl;

	return 0;
}
