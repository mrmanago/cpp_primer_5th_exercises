#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::iterator;
using iter = vector<int>::const_iterator;

void printVector(iter, iter);

int main() {
    vector<int> v1 = { 1,2,3,4,5 };
    printVector(v1.begin(), v1.end());
    return 0;
}

void printVector(iter beg, iter end) {
#ifndef NDEBUG
    cout << (beg != end) << endl;
#endif
    if (beg != end) {
        cout << *beg << " ";
        printVector(beg + 1, end);
    }
}