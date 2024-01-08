#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat()
{
	this->type = "WrongCat";

	std::cout << "WrongCat: Default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
	*this = other;

	std::cout << "WrongCat: Copy constructor" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: Destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	this->WrongAnimal::operator=(other);

	std::cout << "WrongCat: Assignment operator" << std::endl;
	return (*this);
}




void WrongCat::makeSound() const {
	std::cout << "NOT Meow! NOT Meow! NOT Meow!" << std::endl;
}
