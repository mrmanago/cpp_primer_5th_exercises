#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int a = 1, b = 5, c = 10, d = 1;
	if (a > b > c > d) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	return 0;
}

