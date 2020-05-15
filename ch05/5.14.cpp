#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string word, currWord, commonWord;
    cin >> word;
    int count = 1, maxCount = 0;
    while (cin >> currWord) {
        if (word == currWord) {
            ++count;
            if (count > maxCount) {
                maxCount = count;
                commonWord = word;
            }
        } else {
            word = currWord;
            count = 1;
        }
    }

    if (maxCount < 2) {
        cout << "There are no repeating words.";
    } else {
        cout << commonWord << " occurred " << maxCount << " times.\n";
    }

    return 0;
}