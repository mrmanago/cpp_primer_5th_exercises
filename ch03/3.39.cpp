#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string str1 = "Hello";
	string str2 = "World";

	if (str1.size() == str2.size()) {
		cout << str1 << " is the same length as " << str2 << ".\n";
	} else {
		cout << str1 << " and " << str2 << " are not the same lengths.\n";
	}

	const char* cstr1 = "Hello";
	const char* cstr2 = "World";

	auto cStringComp = strcmp(cstr1, cstr2);

	if (cStringComp == 0) {
		cout << cstr1 << " matches " << cstr2 << "\n";
	} else if (cStringComp > 0) {
		cout << cstr1 << " is greater than " << cstr2 << "\n";
	} else {
		cout << cstr1 << " is less than " << cstr2 << "\n";
	}

	return 0;
}