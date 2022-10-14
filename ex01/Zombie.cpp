
#include "Zombie.hpp"

void Zombie::set_name(std::string name) {
	_name = name;
}

void Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "A zombie " << _name << " is destroyed!\n" << std::endl;
}