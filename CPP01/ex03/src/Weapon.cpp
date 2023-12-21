#include "Weapon.hpp"

Weapon::Weapon(std::string type)
	: _nameWearpon(type) {}

Weapon::~Weapon() {}

void Weapon::setType(std::string type) {
	this->_nameWearpon = type;
}

std::string Weapon::getType() const {
	return this->_nameWearpon;
}
