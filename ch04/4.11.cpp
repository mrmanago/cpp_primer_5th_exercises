#include <iostream>

using std::cout;
using std::endl;

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