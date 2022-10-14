#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	 Zombie* zombie_pointer = new Zombie;
	 (*zombie_pointer).setName(name);
	 return (zombie_pointer);
}