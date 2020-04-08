#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void printVector(vector<int>);

int main()
{
	vector<int> v(10, 5);
	for (auto it = v.begin(); it != v.end(); it++) {
		*it *= 2;
	}

	printVector(v);

	return 0;
}

void printVector(vector<int> v) {
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
}