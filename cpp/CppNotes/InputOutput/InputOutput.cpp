/*Notes on Input and Output c++
 *Kevin
 */
#include <iostream>
#include "InputOutput.h"

int main()
{
    std::cout << "Kevin" << '\n' << "Enter a number: ";
    int input{0};
    std::cin >> input;
    std::cout << "You Entered " << input;
    return 0;
}

int readNumber()
{
    std::cout << "Enter a number: ";
    int x{0};
    std::cin >> x;
    return x;
}
