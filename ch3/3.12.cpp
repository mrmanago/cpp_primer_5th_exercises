#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<vector<int>> ivec;			// valid. ivec is a 2d int vector
	// vector<string> svec = ivec; invalid because types don't match
	vector<string> svec(10, "null");	// valid. 10 strings that all have the value of "null"

	return 0;
}