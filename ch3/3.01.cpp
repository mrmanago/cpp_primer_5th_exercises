#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	//rewritten 1.9
	int sum = 0, i = 50;
	while (i <= 100) {
		sum += i;
		i++;
	}
	cout << sum << endl;

	//rewritten 1.10
	int cnt = 10;
	while (cnt >= 0) {
		cout << cnt << endl;
		cnt--;
	}

	//rewritten 1.11
	cout << "Please enter 2 integers" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	int distance = abs(v1 - v2);
	int n = 0;
	if (v1 >= v2) {
		while (n <= distance) {
			cout << v2 + n << endl;
			n++;
		}
	}
	else {
		while (n <= distance) {
			cout << v1 + n << endl;
			n++;
		}
	}

	return 0;
}
