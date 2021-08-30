//Notes and tests regarding operators in C++
#include <iostream>

void shortCircuitTest()
{
	int var1{ 0 };
	int var2{ 3 };
	if (var2 == 3 | (var1 = 1) == 0)
		std::cout << "Value of var1 is " << var1 << '\n'; //value is 1, no short circuit
	if (var2 == 3 || (var1 = 2) == 0)
		std::cout << "Value of var1 is " << var1 << '\n'; //value is still 1, short circuit
}

int main()
{
	shortCircuitTest();
	return 0;
}