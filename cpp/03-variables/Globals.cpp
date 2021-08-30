#include "Globals.h"
#include <iostream>

//Global variable
int global{ 4 };

//constant variable
constexpr int kevins_favorite_number{ 7 };
int value{ 5 };
const int constant_value{ value };

void globalTests() 
{
	std::cout << "Global Tests--" << '\n';
	printVar();
}
void printVar()
{
	std::cout << "global variable: " << global << '\n';
}