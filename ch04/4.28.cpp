#include <iostream>

using std::cout;

int main()
{
    cout << "bool           is " << sizeof(bool) << " bytes." << "\n";
    cout << "char           is " << sizeof(char) << " bytes." << "\n";
    cout << "wchar_t        is " << sizeof(wchar_t) << " bytes." << "\n";
    cout << "char16_t       is " << sizeof(char16_t) << " bytes." << "\n";
    cout << "char32_t       is " << sizeof(char32_t) << " bytes." << "\n";
    cout << "short          is " << sizeof(short) << " bytes." << "\n";
    cout << "int            is " << sizeof(int) << " bytes." << "\n";
    cout << "long           is " << sizeof(long) << " bytes." << "\n";
    cout << "long long      is " << sizeof(long long) << " bytes." << "\n";
    cout << "float          is " << sizeof(float) << " bytes." << "\n";
    cout << "double         is " << sizeof(double) << " bytes." << "\n";
    cout << "long double    is " << sizeof(long double) << " bytes." << "\n";
    cout << "\n";

	return 0;
}