#include <iostream>

using std::cout;
using std::endl;

int count()
{
	static int count = 0;
	++count;
	return count;
}

int main()
{
	for (int i = 0; i < 10; ++i) {
		cout << count() << endl;
	}
	return 0;
}