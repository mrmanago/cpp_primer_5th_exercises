#include <iostream>
#include <vector>

using std::cout;
using std::vector;

bool prefix(const vector<int>&, const vector<int>&);

int main()
{
    vector<int> v1 = { 0, 1, 1 };
    vector<int> v2 = { 0, 1, 1, 2, 3, 5, 8 };

    if (prefix(v1, v2)) {
        cout << "One vector is a prefix of the other.\n";
    } else {
        cout << "The vectors are not prefixes of eachother. \n";
    }

    return 0;
}

bool prefix(const vector<int>& v1, const vector<int>& v2) {
    if (v1 == v2) {
        return true;
    } else {
        if (v1.size() < v2.size()) {
            for (int i = 0; i < v1.size(); ++i) {
                if (v1[i] != v2[i]) {
                    return false;
                }
            }
            return true;
        } else {
            for (int i = 0; i < v2.size(); ++i) {
                if (v2[i] != v1[i]) {
                    return false;
                }
            }
        }
    }
    return false;
}