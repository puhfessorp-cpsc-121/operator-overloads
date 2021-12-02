#ifndef MY_CLASS_H
#define MY_CLASS_H


//
#include <string>

//
class MyClass {

	public:
		MyClass(std::string s);
		
		void print();
		
		MyClass operator+(MyClass& other);
		bool operator==(MyClass& other);
		void operator>>(MyClass& other);
		std::string operator[](size_t index);
	
	private:
		MyClass();
		std::string s_;
};


#endif

