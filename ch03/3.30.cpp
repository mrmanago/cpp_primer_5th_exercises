#include <iostream>
#include <string>
#include <vector>
#include <cstddef>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	constexpr size_t array_size = 10; // makes 10 elements with indices from 0 - 9
	int ia[array_size];
	for (size_t ix = 1; ix </*=*/ array_size; ++ix) // goes to 10 which `ia` does not have an index that is in the 10th place
		ia[ix] = ix;
	
	return 0;
}