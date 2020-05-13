#include <iostream>

using std::cout;
using std::endl;

int main()
{
	char cstr1[] = "Hello";
	char cstr2[] = "World";
	char cstr3[11];

	strcpy(cstr3, cstr1);
	strcpy(cstr3, cstr2);

	cout << cstr3 << endl;

	return 0;
}