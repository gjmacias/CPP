#include "Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria("ice") {
	*this = other;
}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice& other) {
	this->_type = other._type;

	return *this;
}




AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
