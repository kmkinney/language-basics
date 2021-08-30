#include "Math.h"
namespace math
{
	double add(double a, double b)
	{
		return a + b;
	}
	double subtract(double a, double b)
	{
		return a - b;
	}
	double multiply(double a, double b)
	{
		return a * b;
	}
	double divide(double a, double b)
	{
		return a / b;
	}
	double power(double base, double exponent)
	{
		return std::pow(base, exponent);
	}
}