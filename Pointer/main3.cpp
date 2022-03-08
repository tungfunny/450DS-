#include <iostream>
using namespace std;

void printValue(const int &value)	// value is a const reference
{
	// compile error: a const reference cannot have its value changed!
	value = 69;
	
	cout << value << endl;
}

int main()
{
	int x(1);

	printValue(x);	    //argument is a variable
	printValue(5);	    //argument is a const
	printValue(x + 5);	    //argument is a expression

	return 0;
}