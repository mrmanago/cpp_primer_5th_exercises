#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string word;
	vector<string> v1;
	while (cin >> word)
		v1.push_back(word);

	return 0;
}