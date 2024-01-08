#include "Dog.hpp"

#include <iostream>

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();

	std::cout << "Dog: Default constructor" << std::endl;
}

Dog::Dog(const Dog& other) : Animal()
{
	*this = other;

	std::cout << "Dog: Copy constructor" << std::endl;
}

Dog::~Dog() 
{
	delete this->brain;

	std::cout << "Dog: Destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	this->Animal::operator=(other);
	this->brain = other.brain;

	std::cout << "Dog: Assignment operator" << std::endl;
	return (*this);
}



void Dog::makeSound() const {
	std::cout << "Woof! Woof! Woof!" << std::endl;
}

std::string	Dog::getIdea(unsigned int n) const{
	return (this->brain->getIdea(n));
}

void	Dog::setIdea(unsigned int n, std::string idea) {
	this->brain->setIdea(n, idea);
}
