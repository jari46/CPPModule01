#include "Harl.hpp"

void Harl::complain(std::string level) {
	std::string levels[4] = \
		{std::string("DEBUG"), \
		std::string("INFO"), \
		std::string("WARNING"), \
		std::string("ERROR")};

	/* basic function pointer looks like: int (*f)(int, int)*/
	void (*complainsPTR[4])(void) = {debug, info, warning, error};

    for (int i = 0; i < 4; i++)
        if (level == levels[i])
			(*complainsPTR[i])();
}

static int leveltoe(std::string level) {
	std::string levels[4] = \
		{std::string("DEBUG"), \
		std::string("INFO"), \
		std::string("WARNING"), \
		std::string("ERROR")};

	for (int i = 0; i < 4; ++i) {
		if (level == levels[i])
			return i;
	}
	return -1;
}

/* exercise for switch */
void Harl::complainFilter(std::string level) {
	void (*complainsPTR[4])(void) = {debug, info, warning, error};

	switch (leveltoe(level)) {
		case DEBUG :
			(*complainsPTR[DEBUG])();
		case INFO :
			(*complainsPTR[INFO])();
		case WARNING :
			(*complainsPTR[WARNING])();
		case ERROR :
			(*complainsPTR[ERROR])();
			break ;
		default :
			std::cout << "no matched complain.." << std::endl;
	}
}

void Harl::debug(void) {
	std::cout << "DEBUG: blabla~~" << std::endl;
}

void Harl::info(void) {
	std::cout << "INFORMATION: blabla~~" << std::endl;
}

void Harl::warning(void) {
	std::cout << "WARNing: blabla~~" << std::endl;
}

void Harl::error(void) {
	std::cout << "ERROR: blabla~~" << std::endl;
}
