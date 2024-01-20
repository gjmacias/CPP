#include "Cure.hpp"

#include <iostream>

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( const Cure& other ) : AMateria("cure") {
	*this = other;
}

Cure::~Cure( void ) {}

Cure& Cure::operator=( const Cure& other ) {
	this->_type = other._type;

	return (*this);
}

/*********** FUNCTIONS ***********/

AMateria* Cure::clone( void ) const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
