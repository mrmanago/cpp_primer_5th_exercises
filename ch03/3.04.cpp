#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void strEqual(string, string);
void strLength(string, string);

int main()
{
	string word1 = "hello";
	string word2 = "Hello";

	cout << word1 << endl;
	cout << word2 << endl;

	strEqual(word1, word2);
	strLength(word1, word2);

	return 0;
}

void strEqual(string str1, string str2) {
	if (str1 == str2) {
		cout << "The strings are equal." << endl;
	}
	else {
		if (str1 > str2) {
			cout << "\"" << str1 << "\"" << " is larger." << endl;
		}
		else {
			cout << "\"" << str2 << "\"" << " is larger." << endl;
		}
	}
}

void strLength(string str1, string str2) {
	if (str1.length() == str2.length()) {
		cout << "The strings are the same length." << endl;
	}
	else {
		if (str1.length() > str2.length()) {
			cout << "\"" << str1 << "\"" << " is longer." << endl;
		}
		else {
			cout << "\"" << str2 << "\"" << " is longer." << endl;
		}
	}
}