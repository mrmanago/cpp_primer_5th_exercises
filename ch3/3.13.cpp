#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void printIntVector(vector<int>);
void printStringVector(vector<string>);

int main()
{
	// 0 elements
	vector<int> v1;
	// 10 elements with a value of 0
	vector<int> v2(10);
	// 10 elements with a value of 42
	vector<int> v3(10, 42);
	// 1 element with the value of 10
	vector<int> v4{ 10 };
	// 10 elements with the value of 42
	vector<int> v5{ 10, 42 };
	// 10 elements that are an empty string
	vector<string> v6{ 10 };
	// 10 elements that have the value of "hi"
	vector<string> v7{ 10, "hi" };

	cout << "v1: ";
	printIntVector(v1);

	cout << "v2: ";
	printIntVector(v2);

	cout << "v3: ";
	printIntVector(v3);

	cout << "v4: ";
	printIntVector(v4);

	cout << "v5: ";
	printIntVector(v5);

	cout << "v6: ";
	printStringVector(v6);

	cout << "v7: ";
	printStringVector(v7);

	return 0;
}

void printIntVector(vector<int> v) {
	for (auto index : v)
		cout << index << ' ';
	cout << "\n";
}

void printStringVector(vector<string> v) {
	for (auto index : v)
		cout << '"' << index << '"' << ' ';
	cout << "\n";
}