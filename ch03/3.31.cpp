#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a[10];
	unsigned int n = sizeof(a) / sizeof(a[0]);
	cout << n << endl;

	for (auto i = 0; i < n; i++ ) {
		a[i] = i;
		cout << a[i] << " ";
	}

	return 0;
}

