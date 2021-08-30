/*Notes and tests of Input and Output basics
*/
#include <iostream>
#include <string>

int getNum();

//Using the std::string type
std::string getName()
{
	std::string name;
	std::cout << "Enter Name: ";
	std::cin >> name;
	return name;
}
//main function(method)
int main()
{
	//this works
	std::cout<<"Hello";

	//this doesn't
	//std::cout("Hello");

	//ways to end the line
	//std::endl
	std::cout << std::endl << "One line" << std::endl << "Two lines";

	// \n
	std::cout << "\nThree lines" << '\n' << "Four lines\n";

	int input = getNum();
	std::cout << input << '\n';

	std::cout << getName() << '\n';
	return 0;
}

//getting input
int getNum()
{
	std::cout << "Enter a number: "; //results in a zero if non number chars entered
	int input{};
	std::cin >> input;
	return input;
}