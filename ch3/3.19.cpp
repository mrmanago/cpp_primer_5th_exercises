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
	// 2nd preference
	vector<int> v1 = { 42, 42, 42 , 42, 42, 42, 42, 42, 42, 42 };
	printVector(v1);

	// 1st preference. Concise and readable. I tend to miscount
	vector<int> v2(10, 42);
	printVector(v2);

	// last preference
	vector<int> v3{ 42, 42, 42 , 42, 42, 42, 42, 42, 42, 42 };
	printVector(v3);

	return 0;
}

void printVector(vector<int> v) {
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}