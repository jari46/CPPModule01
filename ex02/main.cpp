#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "\nThe memory address" << std::endl;
	std::cout << "of the string variable.:  " << &str << std::endl;
	std::cout << "held by stringPTR.:  " << stringPTR << std::endl;
	std::cout << "held by stringREF.:  " << &stringREF << std::endl;

	std::cout << "\nThe value" << std::endl;
	std::cout << "of the string variable.:  " << str << std::endl;
	std::cout << "pointed to by stringPTR.:  " << *stringPTR << std::endl;
	std::cout << "pointed to by stringREF.:  " << stringREF << std::endl;
	
	/* so, let's use references!  */
}