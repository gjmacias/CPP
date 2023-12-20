
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		Weapon spoon = Weapon("dangerous spoon");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		jim.setWeapon(spoon);
		club.setType("foamy club");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
	}
}
