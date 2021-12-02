

//
#include <iostream>
#include "MyClass.h"


//
using std::cout, std::cin, std::endl;


//
int main()
{
	//
	MyClass c1("One"), c2("Two"), c3("");
	c3 = c1 + c2;
	
	//
	cout << "Checking if c3 == c1" << endl;
	if ( c3 == c1 ) {
		cout << "They were equal" << endl;
	}
	else {
		cout << "They were not equal" << endl;
	}
	
	//
	cout << "Trying out the arrows" << endl;
	c1 >> c2;
	
	//
	cout << "Trying out the brackets" << endl;
	cout << "c1[1] gives: " << c1[1] << endl;
	cout << "c1[20] gives: " << c1[20] << endl;
	
	//
	cout << "Printing c1: ";
	c1.print();
	
	//
	cout << "Printing c2: ";
	c2.print();
	
	//
	cout << "Printing c3: ";
	c3.print();
	
	return 0;
}



