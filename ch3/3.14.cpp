#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int x = 0;
	vector<int> v1;
	while (cin >> x)
		v1.push_back(x);

	return 0;
}