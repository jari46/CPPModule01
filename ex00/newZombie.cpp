#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	 Zombie* zombiePTR = new Zombie(name);
	 return (zombiePTR);
}
