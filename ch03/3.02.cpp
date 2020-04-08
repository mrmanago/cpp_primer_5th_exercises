#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	// reads 1 line at a time
	string line;
	while (getline(cin,line)) {
		cout << line << endl;
	}

	// reads 1 word at a time
	string word;
	while (cin >> word) {
		cout << word << endl;
	}
}
