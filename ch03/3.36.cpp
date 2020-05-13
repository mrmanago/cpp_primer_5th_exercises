#include <iostream>
#include <iterator>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

bool compareArrays(int* const b1, int* const e1, int* const b2, int* const e2);

int main()
{
	int arr1[6] = { 0, 1, 2, 3, 4, 5 };
	int arr2[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	if (compareArrays(begin(arr1), end(arr1), begin(arr2), end(arr2)))
		cout << "The two arrays are equal." << endl;
	else
		cout << "The two arrays are not equal." << endl;

	vector<int> v1 = { 0, 1, 2, 3, 4, 5 };
	vector<int> v2 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	if (v1 == v2) {
		cout << "The two vectors are equal." << endl;
	} else {
		cout << "The two vectors are not equal." << endl;
	}

	return 0;
}

bool compareArrays(int* const b1, int* const e1, int* const b2, int* const e2) {
	if ((e1 - b1) != (e2 - b2))
		return false;
	else {
		for (int *i = b1, *j = b2; (i != e1) && (j != e2); ++i, ++j)
			if (*i != *j) return false;
	}

	return true;
}