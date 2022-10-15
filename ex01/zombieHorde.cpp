#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	//It must allocate N Zombie objects in a single allocation.
	Zombie* zombieHordePTR = new Zombie[N];

	//Then, it has to initialize the zombies,
	//giving each one of them the name passed as parameter.
	for (int i = 0; i < N; i++) {
		zombieHordePTR[i].setName(name);
	}

	//The function returns a pointer to the first zombie.
	return (zombieHordePTR);
}
