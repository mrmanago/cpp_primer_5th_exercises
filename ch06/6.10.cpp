#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void swap(int*, int*);

int main()
{
    int x = 3, y = 9;
    cout << x << " " << y << endl;
    swap(&x, &y);
    cout << x << " " << y << endl;

    return 0;
}

void swap(int* v1, int* v2)
{
    int s1 = *v1, s2 = *v2;
    *v1 = s2;
    *v2 = s1;
}