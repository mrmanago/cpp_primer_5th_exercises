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
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
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
	cout << "Has the size of " << v.size() << " elements and they are: ";
	for (auto index : v)
		cout << index << ' ';
	cout << "\n";
}

void printStringVector(vector<string> v) {
	cout << "Has the size of " << v.size() << " elements and they are: ";
	for (auto index : v)
		cout << '"' << index << '"' << ' ';
	cout << "\n";
}