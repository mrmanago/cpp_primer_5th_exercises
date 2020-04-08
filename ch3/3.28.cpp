#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string sa[10];		// global scope. 10 empty strings.
int ia[10];			// global scope. 10 elements with the value of 0.

int main()
{
	string sa[10];	// block scope. 10 empty strings.
	int ia2[10];	// block scope. 10 undefined integers.
	
	return 0;
}