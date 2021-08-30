//Directives tell the pre-processor to do something 
//e.g.
#include <iostream> //this is a directive telling the preprocessor to include this file here for compilation
//iostream here is a header file containing the function prototypes for funcions like std::cout
//the implementation of std::cout is linked in from the standard library during linking

//using my own header
#include "Directives.h"


#define MY_NAME "Kevin" //this is a Macro, replacing all MY_NAME with "Kevin", not good practice
#define YES //these can be used with no "", it is blank

int main()
{
	//coniditional compiling with Macros
#ifdef YES
	std::cout << "YES\n";
#endif
#ifdef NO
	std::cout << "NO\n";
#endif
#ifndef NO
	std::cout << "Not No\n";
#endif
#if 0
	std::cout << "this will not compile" and hence may have erros :)
#endif
		std::cout << MY_NAME << '\n';
	return 0;
}

//function definition of add
int add(int one, int two)
{
	return 1 + 2;
}