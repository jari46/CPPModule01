#include <iostream>
#include "Harl.hpp"

/* 1. go to [Harl.hpp]: static member functions
** 2. go to [Harl.cpp]: usage of member function pointer
*/

int main(void) {
	{
		Harl harl;

		std::cout << "\n\n* Harl complains for your DEBUGging. *" << std::endl;
		harl.complain("DEBUG");

		std::cout << "\n\n* Harl complains to give you INFORMATION. *" << std::endl;
		harl.complain("INFO");

		std::cout << "\n\n* Harl complains to WARN you. *" << std::endl;
		harl.complain("WARNING");

		std::cout << "\n\n* Harl complains to inform you of the ERROR. *" << std::endl;
		harl.complain("ERROR");
	}
	{
		Harl harl;
		
		std::cout << "\n\n* Harl complains for your DEBUGging. *" << std::endl;
		harl.complainFilter("DEBUG");

		std::cout << "\n\n* Harl complains for your DEBUGging. *" << std::endl;
		harl.complainFilter("WARNING");

		std::cout << "\n\n* Harl complains for your DEBUGging. *" << std::endl;
		harl.complainFilter("...?");
	}

}
