#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name)
	: _name(name) , _weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::attack() const {
	if (_weapon != NULL) {
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	} else {
		std::cout << this->_name << " attacks with his bare hands" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
