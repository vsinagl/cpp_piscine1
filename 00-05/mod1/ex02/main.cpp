
#include <iostream>

/*
Pointer and references
- they have the same purpose --> manipulate with addresses,
however, they behave little bit different: check the following implementatin
P.S the goal is to print string and it's address by using object itself, pointer and reference
*/
int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << " : " << str << std::endl;
	std::cout << stringPTR << " : " << *stringPTR << std::endl;
	std::cout << &stringREF << " : " << stringREF << std::endl;
}