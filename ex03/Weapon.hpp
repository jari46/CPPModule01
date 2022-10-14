#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	private:
		std::string _type;

	public:
		//returns a const reference to type.
		const std::string& getType(void);

		//sets type using the new one passed as parameter.
		void setType(std::string type);

		Weapon(std::string type);
};

#endif /* WEAPON_HPP */