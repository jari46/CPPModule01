#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/* go to the [HumanA.hpp], [HumanB.hpp] and read comments. */

int main() {
	{
		std::cout << "\n   * ROUND 1 *   " << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);//now "bob" is the owner of the "club"
		bob.attack();
		club.setType("some other type of club");//the weapon is upgraded!
		bob.attack();

		// Weapon club2 = Weapon("the best club");
		// bob.setWeapon(club2);
		// bob.attack();
	}
	{
		std::cout << "\n   * ROUND 2 *   " << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);//now "jim" is the owner of the "club"
		jim.attack();
		club.setType("some other type of club");//the weapon is upgraded!
		jim.attack();

		std::cout << "\n   * ROUND 2 - 1 *   " << std::endl;
		Weapon club2 = Weapon("new club");
		jim.setWeapon(club2);//now "jim" is the owner of the "club2"
		jim.attack();
	}
	return 0;
}

//
