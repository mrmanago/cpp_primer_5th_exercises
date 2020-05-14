#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
	vector<int> v = { 0, 1, 2, 3, 4, 5 };
	
	for (auto &i : v) {
		i = i % 2 ? i *= 2 : i;
	}

	for (auto i : v) {
		cout << i << ' ';
	}

	return 0;
}