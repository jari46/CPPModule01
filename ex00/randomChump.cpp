#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie one_day_zombie;
	one_day_zombie.setName(name);
	one_day_zombie.announce();
}