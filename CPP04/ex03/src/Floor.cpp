#include "Floor.hpp"

#include <iostream>

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

Floor::Floor( void ) : _content (NULL), _next (NULL) {}

Floor::Floor(const Floor& other)
{
	this->_content = other._content->clone();
	this->_next = other._next->clone();
}

Floor::~Floor( void )
{
	if (this->_content == 0)
	{ 
		delete this->_content;
	}
}

Floor& Floor::operator=(const Floor& other)
{
	if (this->_content)
		delete this->_content;
	if (this->_next)
		delete this->_next;
	this->_content = other._content->clone();
	this->_next = other._next->clone();
	return (*this);
}

/*********** FUNCTIONS ***********/

void Floor::add( Floor* floor, Floor* tmp, AMateria* materia)
{
	tmp->_content = materia;
	tmp->_next = floor;
}

Floor* Floor::clone( void ) const {
	return (new Floor(*this));
}

Floor*	Floor::getNext( void ) const
{
	return (this->_next);
}
