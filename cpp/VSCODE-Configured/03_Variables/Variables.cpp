/*Notes and tests all about variables in c++
*/

#include <iostream>
#include "Variables.h"
#include "Integers.h"
#include "Globals.h"
#include "Structs.h"

int main() 
{
	//variableTests();
	//globalTests();
	//integerTests();
	structsTest();
}

void variableTests() 
{
	//4 different ways to initialize variables
	int x = 5;
	//will drop decimal points on floating point & other larger types
	int y(5);
	//will not drop as above
	int z{ 5 };
	int zero{};

	std::cout << x << std::endl << y << std::endl << z << std::endl << zero << std::endl;

	//ex of losing precision
	int a(4.5); //throws warning, stores value of 4
	int b = 3.999; //same as above, stores value of 3

	//int b{ 4.5 }; will not compile

	std::cout << a << '\n' << b << '\n';
}

