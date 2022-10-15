#include <iostream>
#include "Harl.hpp"

int main(void) {
	Harl harl;

	std::cout << "\n* Harl complains for your debugging. *" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\n* Harl complains to give you information. *" << std::endl;
	harl.complain("INFO");

	std::cout << "\n* Harl complains to warn you. *" << std::endl;
	harl.complain("WARNING");

	std::cout << "\n* Harl complains to inform you of the error. *" << std::endl;
	harl.complain("ERROR");

	Harl harl2;

	std::cout << "\n* Harl2 complains to warn you, again. *" << std::endl;
	harl2.complain("WARNING");

	std::cout << "\n* Harl2 complains to inform you of the error. *" << std::endl;
	harl2.complain("ERROR");

	std::cout << "\n* Harl2 complains for your debugging, again. *" << std::endl;
	harl2.complain("DEBUG");

	std::cout << "\n* Harl2 complains to give you information, again. *" << std::endl;
	harl2.complain("INFO");
}
