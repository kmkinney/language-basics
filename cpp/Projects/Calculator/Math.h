#pragma once
#include <cmath>
namespace math 
{
	constexpr double pi = 3.1415926535897;
	double add(double a, double b);
	double subtract(double a, double b);
	double multiply(double a, double b);
	double divide(double a, double b);
	double power(double base, double exponent);

	//practice using an enum
	enum Option
	{
		ADD,
		SUBTRACT,
		MULTIPLY,
		DIVIDE,
		POWER,
		EXIT,
		NO_OPTION
	};
}



