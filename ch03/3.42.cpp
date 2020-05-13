#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int a[10];
	for (int i = 0; i < v.size(); i++)
		a[i] = v[i];

	for (auto i : a)
		cout << i << " ";

	return 0;
}

