
#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal: Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;

	std::cout << "WrongAnimal: Copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: Destructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	this->type = other.type;

	std::cout << "WrongAnimal: Assignment operator" << std::endl;
	return (*this);
}




void WrongAnimal::makeSound() const {
	std::cout << "\"NOT Animal generic sound\"" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return this->type;
}
