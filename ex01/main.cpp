#include "Zombie.hpp"

#define NUMBER 5

int main() {
	Zombie* zombieHorde1 = zombieHorde(NUMBER, "ZOMZOM");
	for (int i = 0; i < NUMBER; i++) {
		zombieHorde1[i].announce();
	}
	delete[] zombieHorde1;
}