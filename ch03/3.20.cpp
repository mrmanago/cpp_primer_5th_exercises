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
	for (int e = 0; e + 1 < v1.size(); e++) {
		if (e % 2 == 0) {
			int sum = v1[e] + v1[e + 1];
			cout << "The sum of " << v1[e] << " and " << v1[e + 1] << " is " << sum << endl;
		}
	}

	cout << "\n";

	// prints sum of first and last elements
	int firstAndLast = 0;
	cout << "The sum of " << v1[0] << " and " << v1[v1.size() - 1] << " is " << v1[0] + v1[v1.size() - 1] << endl;

	cout << "\n";

	// prints sum of second and second-to-last and so on
	int sum = 0;
	for (int i = 1; i < v1.size(); i++) {
		cout << "The sum of " << sum << " and ";
		sum += v1[v1.size() - i];
		cout << v1[v1.size() - i] << " is " << sum << endl;
	}

	return 0;
}