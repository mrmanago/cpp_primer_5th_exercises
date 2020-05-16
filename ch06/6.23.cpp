#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int*);
void print(const char*);
void print(const int*, const int*);
void print(const int ia[], size_t size);
void print(int(&arr)[2]);

int main()
{
    int n = 0, j[2] = { 1, 2 };
    char c[6] = "Hello";

    print(c);
    print(begin(j), end(j));
    print(&n);
    print(j, end(j) - begin(j));
    print(j);

    return 0;
}

void print(const int* pi)
{
    cout << *pi << endl;
}

void print(const char* p)
{
    while (*p) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;
}

void print(const int* beg, const int* end)
{
    while (beg != end) {
        cout << *beg << endl;
        ++beg;
    }
    cout << endl;
}

void print(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i) {
        cout << ia[i] << " ";
    }
    cout << endl;
}

void print(int(&arr)[2])
{
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}