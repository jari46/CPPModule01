#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string _name;
	
	public:
		void set_name(std::string name);
		void announce(void);

		~Zombie();
};

//It creates a zombie, name it, and return it so you can use it outside of the function scope. 
//-> allocate the zombies on the heap.
Zombie* newZombie(std::string name);

//It creates a zombie, name it, and the zombie announces itself. 
//-> allocate the zombies in the stack
void randomChump(std::string name);

# endif /* ZOMBIE_HPP */
