// Prediction: a char and not a char& will not change the string.

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void forRangeX(string);
void whileX(string);
void forX(string);

int main()
{
	string str = "Hello, World!";
	forRangeX(str);
	whileX(str);
	forX(str);

	return 0;
}

void forRangeX(string str) {
	for (char &c : str) {
		c = 'X';
	}
	cout << str << endl;
}

void whileX(string str) {
	int n = 0;
	while (n < str.size()) {
		str[n] = 'X';
		n++;
	}
	cout << str << endl;
}

void forX(string str) {
	for (decltype(str.size()) i = 0; i < str.size(); i++) {
		str[i] = 'X';
	}
	cout << str << endl;
}

// I prefer the for range approach the most because of its conciseness and readability