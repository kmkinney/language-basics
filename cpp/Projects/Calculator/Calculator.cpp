//Simple text calculator, practice using different math and input stuff
#include <iostream>
#include "Math.h"

double getNum();
math::Option optionChoice();
void doMath(math::Option option);

//main function	
int main()
{
	std::cout << "Welcome to calculator!\n";
	math::Option option{math::NO_OPTION};
	while (option != math::EXIT) {
		option = optionChoice();
		if (option != math::EXIT)
		{
			doMath(option);
		}
	}
	std::cout << "======\n" << "Thank you!!!!\n" << "======";
	return 0;
}

//Used to get user inputted number
double getNum()
{
	std::cout << "Enter a number: ";
	double num{ 0 };
	std::cin >> num;
	return num;
}

//used to display options and recieve user's choice;
math::Option optionChoice()
{
	math::Option op{math::NO_OPTION};
	do
	{
		std::cout << "Menu:\n";
		std::cout << "(1)Addition\n";
		std::cout << "(2)Subraction\n";
		std::cout << "(3)Multiplication\n";
		std::cout << "(4)Division\n";
		std::cout << "(5)Exponent\n";
		std::cout << "(6)Quit\n\n";
		std::cout << "Enter a number to choose a function: ";
		int n{ 0 };
		std::cin >> n;
		switch (n)
		{
			case 1:
				op = math::ADD;
				std::cout << "Enter two numbers to add\n";
				break;
			case 2:
				op = math::SUBTRACT;
				std::cout << "Enter two numbers to subtract\n";
				break;
			case 3:
				op = math::MULTIPLY;
				std::cout << "Enter two numbers to multiply\n";
				break;
			case 4:
				op = math::DIVIDE;
				std::cout << "Enter a dividend, then a divisor\n";
				break;
			case 5:
				op = math::POWER;
				std::cout << "Enter a base and an exponent\n";
				break;
			case 6:
				op = math::EXIT;
				break;
			default:
				op = math::NO_OPTION;
				std::cout << "Please enter a valid option...";
				break;
		}
	} while (op == math::NO_OPTION);
	return op;
}

//Does the math
void doMath(math::Option option)
{
	double a{ 0 };
	double b{ 0 };
	a = getNum();
	b = getNum();
	switch (option)
	{
		case math::ADD:
			std::cout << a << " + " << b << " = " << math::add(a, b) << '\n';
			break;
		case math::SUBTRACT:
			std::cout << a << " - " << b << " = " << math::subtract(a, b) << '\n';
			break;
		case math::MULTIPLY:
			std::cout << a << " * " << b << " = " << math::multiply(a, b) << '\n';
			break;
		case math::DIVIDE:
			std::cout << a << " / " << b << " = " << math::divide(a, b) << '\n';
			break;
		case math::POWER:
			std::cout << a << " ^ " << b << " = " << math::power(a, b) << '\n';
			break;
	}
	std::cout << '\n'; //help with aesthetics
}