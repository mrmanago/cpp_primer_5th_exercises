#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main()
{
	int a1[10];
	unsigned const int n = sizeof(a1) / sizeof(a1[0]);
	cout << n << endl;

	for (auto i = 0; i < n; i++ ) {
		a1[i] = i;
	}
	for (auto i : a1) {
		cout << i << " ";
	}
	cout << endl;
	
	int a2[n] = { 0 };
	for (auto i = 0; i < n; i++) {
		a2[i] = a1[i];
	}
	for (auto i : a2) {
		cout << i << " ";
	}

	return 0;
}

