#include "Zombie.hpp"

#include <iostream>
#include <string>

Zombie::Zombie(void) : _name("zombie") {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void) {
	std::cout << this->_name << " Enought brainz..." << std::endl;
}

void Zombie::announce(void) const {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}
