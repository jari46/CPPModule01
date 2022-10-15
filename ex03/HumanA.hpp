#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon &_weapon;//HumanA always have a Weapon

	public:
		/* HumanA takes the Weapon in its constructor */
		HumanA(std::string name, Weapon &weapon);

		void attack(void);
};

#endif /* HUMAN_A_HPP */
