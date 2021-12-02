
//
#include "MyClass.h"


//
#include <iostream>
#include <string>

//
using std::cout, std::endl;
using std::string;

//
MyClass::MyClass(std::string s)
{
	this->s_ = s;
}

//
void MyClass::print()
{
	cout << "My string is: " << this->s_ << endl;
}

//
MyClass MyClass::operator+(MyClass& other)
{
	//
	MyClass value("");
	
	//
	value.s_ = this->s_ + " *** OMG WHAT *** " + other.s_;
	
	return value;
}


//
bool MyClass::operator==(MyClass& other)
{
	cout << "No way bro, everyone is special" << endl;
	
	return false;
}


//
void MyClass::operator>>(MyClass& other)
{
	cout << "Brrrrrip! " << this->s_ << ":::" << other.s_ << endl;
}


//
std::string MyClass::operator[](size_t index)
{
	if ( index >= this->s_.size() ) {
		return "lol NOPE";
	}
	
	return this->s_.substr(index);
}













