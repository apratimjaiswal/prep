// A program to demonstrate the use of stringstream
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string s = " 2.2 a 12345 abc 2";

	// object from the class stringstream
	stringstream geek(s);

	// The object has the value 12345 and stream
	// it to the integer x
	int x = 0;
	geek >> x;

	// Now the variable x holds the value 12345
	cout << "Value of x : " << x;

	return 0;
}

/**
 * Converting Strings to Numbers in C/C++
stringstream() : This is an easy way to convert strings of digits into ints, floats or doubles.
stringstream is a convenient way to manipulate strings.
*/