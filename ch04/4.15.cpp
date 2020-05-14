int main()
{
	
	double dval; int ival; int *pi;
	// illegal code. cannot assign int from type int*
	// dval = ival = pi = 0;

	// Fixed:
	dval = ival = 0;
	pi = 0;

	return 0;
}