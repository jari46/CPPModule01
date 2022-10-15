#include "Zombie.hpp"

#define NUMBER 5
#define NAME "ZOMZOM"

/* go to the [zombieHorde.cpp] and read comments. */

int main() {
	Zombie* zombieHorde1 = zombieHorde(NUMBER, NAME);
	for (int i = 0; i < NUMBER; i++) {
		zombieHorde1[i].announce();
	}
	delete[] zombieHorde1;
}
