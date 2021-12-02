

default: run


run:
	g++ -Wall -pedantic -std=c++17 main.cpp MyClass.cpp -I. -o main && ./main


