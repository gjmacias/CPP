#include "Ice.hpp"

#include <iostream>

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

Ice::Ice( void ) : AMateria("ice") {}

Ice::Ice( const Ice& other ) : AMateria("ice") {
	*this = other;
}

Ice::~Ice( void ) {}

Ice& Ice::operator=( const Ice& other )
{
	this->_type = other._type;

	return (*this);
}

/*********** FUNCTIONS ***********/

AMateria* Ice::clone( void ) const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
