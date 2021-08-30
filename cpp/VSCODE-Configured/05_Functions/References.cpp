#include <iostream>

//pass by value
void passValue(int i)
{
	i = 7;
}
//pass by reference
void passRef(int& i)
{
	i = 7;
}
//printer
void printNum(int x)
{
	std::cout << x << '\n';
}

int main()
{
	int i{}; //set i to 0

	passValue(i);
	printNum(i);

	passRef(i);
	printNum(i);
	return 0;
}