#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int element;
	vector<int> v1;
	while (cin >> element) {
		v1.push_back(element);
	}

	// prints sum of adjacent pairs
	for (auto it = v1.begin(); it + 1 != v1.end(); ++it) {
		int sum = *it + *(it + 1);
		cout << "The sum of " << *it << " and " << *(it + 1) << " is " << sum << endl;
	}

	cout << "\n";

	// prints sum of first and last elements
	cout << "The sum of " << v1[0] << " and " << v1[v1.size() - 1] << " is " << v1[0] + v1[v1.size() - 1];

	cout << "\n";

	// prints sum of second and second-to-last and so on
	int sum = 0;
	for (auto beg = v1.begin(), end = v1.end() - 1; beg <= end; ++beg, --end) {
		cout << *beg + *end << " ";
	}

	return 0;
}