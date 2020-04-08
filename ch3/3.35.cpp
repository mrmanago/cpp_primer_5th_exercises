#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int *p = a;
	int *e = std::end(a);

	for (int *i = a; i != e; i++) {
		*i = 0;
	}

	for (auto e : a) {
		cout << e << " ";
	}

	return 0;
}

