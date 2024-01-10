#include "Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria("cure") {
	*this = other;
}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& other) {
	this->_type = other._type;

	return *this;
}




AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
