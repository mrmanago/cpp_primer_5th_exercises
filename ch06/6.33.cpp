#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>::const_iterator, vector<int>::const_iterator);

int main() {
    vector<int> v{ 4, 0, 6, 3, 12, 0, 5 };
    printVector(v.cbegin(), v.cend());

    return 0;
}

void printVector(vector<int>::const_iterator first, vector<int>::const_iterator last) {
    if (first != last) {
        cout << *first << " ";
        printVector(++first, last);
    }
}