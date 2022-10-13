#include "Zombie.hpp"

int main() {
	
	std::cout << "   * ROUND 1 *   " << std::endl;
	Zombie* Strong = newZombie("Strong");
	(*Strong).announce();

	std::cout << "   * ROUND 2 *   " << std::endl;
	randomChump("Weak");
	//(*Weak).announce();

	std::cout << "   * ROUND 3 *   " << std::endl;
	(*Strong).announce();
	delete Strong;
}