
#include "Animal.hpp"

#include <iostream>
#include <sstream>

Animal::Animal() : type("Animal") {
	std::cout << "Animal: Default constructor" << std::endl;
}

Animal::Animal(const Animal& other)
{
	*this = other;

	std::cout << "Animal: Copy constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal: Destructor" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	this->type = other.type;

	std::cout << "Animal: Assignment operator" << std::endl;
	return (*this);
}




const std::string& Animal::getType() const {
	return this->type;
}
