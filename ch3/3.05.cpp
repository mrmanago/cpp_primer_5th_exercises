#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void combine();
void combineWithSpace();

int main()
{
	combine();
	//combineWithSpace();

	return 0;
}

void combine() {
	string word, sentence;
	if (cin >> sentence) {
		while (cin >> word)
			sentence += word;
		cout << sentence << endl;
	}
}

void combineWithSpace() {
	string word, sentence;
	if (cin >> sentence) {
		while (cin >> word)
			sentence += ' ' + word;
		cout << sentence << endl;
	}
}