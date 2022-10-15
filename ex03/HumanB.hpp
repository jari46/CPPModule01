#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon *_weapon;//HumanB may not always have a Weapon

	public:
		/* HumanB doesn't take the Weapon in its constructor */
		HumanB(std::string name);

		void attack(void);
		void setWeapon(Weapon &weapon);
};

#endif /* HUMAN_B_HPP */
