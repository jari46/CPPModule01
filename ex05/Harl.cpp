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

void Harl::debug(void) {
	std::cout << "you need to debug here: blabla~~" << std::endl;
}

void Harl::info(void) {
	std::cout << "maybe you need this information: blabla~~" << std::endl;
}

void Harl::warning(void) {
	std::cout << "handle or ignore this: blabla~~" << std::endl;
}

void Harl::error(void) {
	std::cout << "need manual intervention here: blabla~~" << std::endl;
}
