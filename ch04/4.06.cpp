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
	int n = 4;
	if (n % 2 == 0) {
		cout << "n is even" << endl;
	}
	else {
		cout << "n is odd" << endl;
	}

	return 0;
}

