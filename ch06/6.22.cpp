#include <iostream>

using std::cout;
using std::endl;

void swap(int*&, int*&);

int main()
{
    int v1 = 20, v2 = 10;
    int *p1 = &v1, *p2 = &v2;
    cout << *p1 << " " << *p2 << endl;
    swap(p1, p2);
    cout << *p1 << " " << *p2 << endl;

    return 0;
}

void swap(int*& p1,int*& p2)
{
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}