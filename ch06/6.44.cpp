#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

inline bool is_shorter(const string &lft, const string &rht)
{
    return lft.size() < rht.size();
}

int main()
{
    cout << is_shorter("Hello, ", "World!") << endl;
    return 0;
}