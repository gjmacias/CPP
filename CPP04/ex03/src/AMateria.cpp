#include "AMateria.hpp"

#include <iostream>

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

AMateria::AMateria( void ) {}

AMateria::AMateria( const std::string type ) : _type(type) {}

AMateria::AMateria( const AMateria& other ) {
	*this = other;
}

AMateria::~AMateria( void ) {
	_type.clear();
}

AMateria&	AMateria::operator=( const AMateria& other ) {
	this->_type = other._type;

	return (*this);
}

/*********** FUNCTIONS ***********/

const	std::string& AMateria::getType() const
{
	static const std::string emptyString = "Seems empty";
	
	if (this->_type != "") {	
		return (this->_type);
	}
	else {
		return (emptyString);
	}
}

void	AMateria::use(ICharacter& target) {
	(void)target;
}

void	AMateria::reset( void ) {
	this->_type =  "";
}

