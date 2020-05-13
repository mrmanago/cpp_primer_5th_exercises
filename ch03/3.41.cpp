#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int a[10] = { 0 };
	vector<int> v(begin(a), end(a));

	for (auto i : v)
		cout << i << " ";

	return 0;
}

