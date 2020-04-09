#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    int grade = 80;
    vector<string> scores = { "F", "D", "C", "B", "A" };
    string letterGrade;
    if (grade != 100) {
        letterGrade = scores[(grade - 50) / 10];
        letterGrade += ((grade % 10 > 7) ? "+" : ((grade % 10 < 3) ? "-" : ""));
    } else {
        letterGrade = scores[0];
    }
    cout << letterGrade << endl;

    return 0;
}