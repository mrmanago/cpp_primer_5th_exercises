#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	// Invalid but runs. It's an empty string so it prints nothing and is undefined.
	string s;
	cout << s[0] << endl;

	return 0;
}