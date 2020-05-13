#include <iostream>

using std::cout;

int main()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    using int_array = int[4];

    for (int_array& i : ia) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }

    for (size_t i = 0; i != 3; ++i) {
        for (size_t j = 0; j != 4; ++j) {
            cout << ia[i][j] << " ";
        }
        cout << "\n";
    }

    for (int_array* p = ia; p != ia + 3; ++p) {
        for (int* q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
        cout << "\n";
    }

	return 0;
}