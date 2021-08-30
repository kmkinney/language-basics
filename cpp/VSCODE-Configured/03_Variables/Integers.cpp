//Things related to Integers
#include<iostream>
#include "Integers.h"

void integerTests()
{
	std::cout << "Integer Tests--" << '\n';
	integerTypes();
	unsignedInts();
}

//size of different integer types
void integerTypes()
{
	std::cout << "short:    \t" << sizeof(short) << '\n';
	std::cout << "int:      \t" << sizeof(int) << '\n';
	std::cout << "long:     \t" << sizeof(long) << '\n';
	std::cout << "long long:\t" << sizeof(long long) << '\n';
}

//unsigned integer types
void unsignedInts()
{
	std::cout << "Unsigned Ints--" << '\n';
	unsigned int ui = -1;
	std::cout << "overflow " << ui << '\n';
}