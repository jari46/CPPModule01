#include <iostream>
#include "Harl.hpp"

/* 1. go to [Harl.hpp]: static member functions
** 2. go to [Harl.cpp]: usage of member function pointer
*/

int main(void) {
	Harl harl;

	std::cout << "\n* Harl complains for your DEBUGging. *" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\n* Harl complains to give you INFORMATION. *" << std::endl;
	harl.complain("INFO");

	std::cout << "\n* Harl complains to WARN you. *" << std::endl;
	harl.complain("WARNING");

	std::cout << "\n* Harl complains to inform you of the ERROR. *" << std::endl;
	harl.complain("ERROR");

	Harl harl2;

	std::cout << "\n* Harl2 complains to WARN you, again. *" << std::endl;
	harl2.complain("WARNING");

	std::cout << "\n* Harl2 complains to inform you of the ERROR. *" << std::endl;
	harl2.complain("ERROR");

	std::cout << "\n* Harl2 complains for your DEBUGging, again. *" << std::endl;
	harl2.complain("DEBUG");

	std::cout << "\n* Harl2 complains to give you INFORMATION, again. *" << std::endl;
	harl2.complain("INFO");
}
