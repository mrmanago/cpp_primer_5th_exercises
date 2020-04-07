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
	vector<string> phrase;
	while (cin >> word) {
		phrase.push_back(word);
	}
	for (auto &capitalize : phrase) {
		if (capitalize[0]) {
			capitalize[0] = toupper(capitalize[0]);
		}
	}
	for (int i = 0; i < phrase.size(); i++) {
		if (i % 8 != 0) {
			cout << phrase[i] << " ";
		}
		else {
			cout << "\n" << phrase[i] << " ";
		}
	}

	return 0;
}