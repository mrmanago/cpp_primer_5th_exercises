// Prediction: a char and not a char& will not change the string.

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void autoX(string);
void charX(string);

int main()
{
	string str = "Hello, World!";
	autoX(str);
	charX(str);

	return 0;
}

void autoX(string str) {
	for (auto &c : str) {
		c = 'X';
	}
	cout << str << endl;
}

void charX(string str) {
	for (char &c : str) {
		c = 'X';
	}
	cout << str << endl;
}