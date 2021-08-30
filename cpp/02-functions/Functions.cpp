#include <iostream>

//must put the functions before main, like this
void printName()
{
	std::cout << "Kevin\n";
}
//OR put a function prototype, or function forward declaration like this
void printAfter();
//with a return type and paramaters
int addThreeAfter(int one, int two, int three);
//NOTE int addThreeAfter(int, int, int); also works but is bad practice

//Function with a paramater
void printNum(int x)
{
	std::cout << x << '\n';
}
//2 paramaters and a return
int multiply(int a, int b)
{
	return a * b;
}

//return by value
int getSeven()
{
	int x{ 7 };
	return x;
}
//pass by value
void passVal(int i)
{
	i = 7;
}
//pass by reference
void passRef(int& i)
{
	i = 7;
}
//for now define always at bottom
int main()
{
	printName();
	printNum(getSeven());
	printNum(multiply(5, 7));

	int i{};
	passVal(i);
	printNum(i); //prints 0

	passRef(i);
	printNum(i); //prints 7

	//Using a function defined after the main
	printAfter();
	printNum(addThreeAfter(1, 2, 3));
	return 0;
	//Constants EXIT_SUCCESS = 0, EXIT_FAILURE = 1
}

//funciton definied after the main
void printAfter()
{
	std::cout << "After\n";
}

int addThreeAfter(int one, int two, int three)
{
	return one + two + three;
}
