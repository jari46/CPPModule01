#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie one_day_zombie;
	one_day_zombie.set_name(name);
	one_day_zombie.announce();
}