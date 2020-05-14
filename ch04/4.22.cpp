#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	int grade = 80;
	string finalgrade = (grade < 60) ? "fail" : "pass";
	
	finalgrade = (grade > 90) ? "high pass" : (grade >= 60 && grade <= 75) ? "60-75" : (grade < 60) ? "fail" : "pass";

	// I prefer this one. Even though it's longer it is more readable.
	if (grade > 90) {
		finalgrade = "highpass";
	}
	else if (grade >= 60 && grade <= 75) {
		finalgrade = "60-75";
	}
	else if (grade >= 60) {
		finalgrade = "pass";
	}
	else {
		finalgrade = "fail";
	}

	cout << finalgrade << endl;

	return 0;
}