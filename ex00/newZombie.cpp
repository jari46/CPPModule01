#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	 Zombie* zombiePTR = new Zombie;
	 (*zombiePTR).setName(name);
	 return (zombiePTR);
}
