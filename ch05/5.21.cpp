#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string preWord, currWord;
    bool repeat = false;
    cin >> preWord;
    while (cin >> currWord) {
        if (islower(currWord[0])) {
            currWord = preWord;
            continue;
        }
        if (currWord == preWord) {
            cout << currWord << " occurs at least twice.\n";
            repeat = true;
            break;
        }
        currWord = preWord;
    }
    if (!repeat) {
        cout << "No word was repeated.\n";
    }

    return 0;
}