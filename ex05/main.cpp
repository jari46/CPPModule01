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

	std::cout << "\n* Harl complains to warn you, again. *" << std::endl;
	harl.complain("WARNING");

	std::cout << "\n* Harl complains for your debugging, again. *" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\n* Harl complains to give you information, again. *" << std::endl;
	harl.complain("INFO");
}
