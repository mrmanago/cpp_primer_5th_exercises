#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0, whiteCnt = 0;

    char ch;
    while (cin.get(ch)) {
        switch (ch) {
        case 'a': case 'A':
            ++aCnt;
            break;
        case 'e': case 'E':
            ++eCnt;
            break;
        case 'i': case 'I':
            ++iCnt;
            break;
        case 'o': case 'O':
            ++oCnt;
            break;
        case 'u': case 'U':
            ++uCnt;
            break;
        case ' ': case '\t': case '\n':
            ++whiteCnt;
            break;
        default:
            ++otherCnt;
            break;
        }
    }
    cout << "Number of vowel a: \t\t" << aCnt << '\n' 
         << "Number of vowel e: \t\t" << eCnt << '\n' 
         << "Number of vowel i: \t\t" << iCnt << '\n' 
         << "Number of vowel o: \t\t" << oCnt << '\n' 
         << "Number of vowel u: \t\t" << uCnt << '\n' 
         << "Number of white spaces: \t" << whiteCnt << endl;

    return 0;
}