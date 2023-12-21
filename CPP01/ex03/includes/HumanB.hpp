#ifndef EX03_HUMANB_HPP_
# define EX03_HUMANB_HPP_

#include "Weapon.hpp"

#include <string>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();

		void	attack() const;
		void	setWeapon(Weapon &weapon);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
