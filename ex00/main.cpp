#include "Zombie.hpp"

/* go to the [Zombie.hpp] and read comments. */

int main() {
	std::cout << "   * ROUND 1 *   " << std::endl;
	Zombie* Strong = newZombie("Strong");
	(*Strong).announce();

	std::cout << "   * ROUND 2 *   " << std::endl;
	randomChump("Weak");
	//(*Weak).announce(); //doesn't work!

	std::cout << "   * ROUND 3 *   " << std::endl;
	(*Strong).announce();
	delete Strong;
	//(*Strong).announce(); //doesn't work!
}
