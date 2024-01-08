#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();

	std::cout << "Cat: Default constructor" << std::endl;
}

Cat::Cat(const Cat& other) : Animal()
{
	*this = other;

	std::cout << "Cat: Copy constructor" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;

	std::cout << "Cat: Destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	this->Animal::operator=(other);
	this->brain = other.brain;

	std::cout << "Cat: Assignment operator" << std::endl;
	return (*this);
}



void Cat::makeSound() const {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}

std::string	Cat::getIdea(unsigned int n) const{
	return (this->brain->getIdea(n));
}

void	Cat::setIdea(unsigned int n, std::string idea) {
	this->brain->setIdea(n, idea);
}
