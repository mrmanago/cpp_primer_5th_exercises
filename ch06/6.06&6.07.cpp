#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::runtime_error;

vector<int> callCntUp();
void printVector(vector<int>);

int main()
{
    printVector(callCntUp());
    printVector(callCntUp());
    printVector(callCntUp());
    printVector(callCntUp());
    printVector(callCntUp());

    return 0;
}

vector<int> callCntUp() {
    static vector<int> v;
    static int i = 0;
    v.push_back(i);
    ++i;
    return v;
}

void printVector(vector<int> b) {
    for (auto e : b) {
        cout << e << " ";
    }
    cout << endl;
}