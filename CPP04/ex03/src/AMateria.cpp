#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria() {}

AMateria::AMateria(const std::string& type) : _type(type) {}

AMateria::AMateria(const AMateria& other) {
	*this = other;
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& other) {
	this->_type = other._type;

	return *this;
}



const std::string& AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}
