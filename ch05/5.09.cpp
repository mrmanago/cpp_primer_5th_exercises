#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	getline(cin, text);
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	for (char c : text) {
		if (c == 'a') ++aCnt;
		else if (c == 'e') ++eCnt;
		else if (c == 'i') ++iCnt;
		else if (c == 'o') ++oCnt;
		else if (c == 'u') ++uCnt;
	}

	return 0;
}