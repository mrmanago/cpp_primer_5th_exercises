#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0, whiteCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;

    char ch, prech = '\0';
    while (cin.get(ch)) {
        switch (ch) {
        case 'a': case 'A':
            ++aCnt;
            break;
        case 'e': case 'E':
            ++eCnt;
            break;
        case 'i': 
            if (prech == 'f') ++fiCnt;
        case 'I':
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
        case 'f':
            if (prech == 'f') ++ffCnt;
            break;
        case 'l':
            if (prech == 'f') ++flCnt;
            break;
        default:
            ++otherCnt;
            break;
        }
        prech = ch;
    }
    cout << "Number of vowel a: \t\t" << aCnt << '\n'
        << "Number of vowel e: \t\t" << eCnt << '\n'
        << "Number of vowel i: \t\t" << iCnt << '\n'
        << "Number of vowel o: \t\t" << oCnt << '\n'
        << "Number of vowel u: \t\t" << uCnt << '\n'
        << "Number of white spaces: \t" << whiteCnt << '\n' 
        << "Number of vowel ff: \t\t" << ffCnt << '\n' 
        << "Number of vowel fl: \t\t" << flCnt << '\n' 
        << "Number of vowel fi: \t\t" << fiCnt << '\n' << endl;

    return 0;
}