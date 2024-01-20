#include "Dog.hpp"

#include <iostream>

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();

	if (this->brain) {
		std::cout << "Dog: Default constructor" << std::endl;
	}
	else
	{
		std::cout << std::endl << "Error: Failed to allocate memory: "<< std::endl;
		std::cout << "Dog: Default constructor" << std::endl << std::endl;
	}
}

Dog::Dog(const Dog& other) : Animal()
{
	this->type = "Dog";
	this->brain = new Brain(*other.brain);

	if (this->brain) {
		std::cout << "Dog: Copy constructor" << std::endl;
	}
	else
	{
		std::cout << std::endl << "Error: Failed to allocate memory: "<< std::endl;
		std::cout << "Dog: Copy constructor" << std::endl << std::endl;
	}
}

Dog::~Dog() 
{
	delete this->brain;

	std::cout << "Dog: Destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other) return (*this);

	if (this->brain) delete this->brain;

	this->brain = new Brain(*other.brain);

	if (this->brain) {
		std::cout << "Dog: Assignment operator" << std::endl;
	}
	else
	{
		std::cout << std::endl << "Error: Failed to allocate memory: "<< std::endl;
		std::cout << "Dog: Assignment operator" << std::endl << std::endl;
	}
	return (*this);
}



void Dog::makeSound() const {
	std::cout << "Woof! Woof! Woof!" << std::endl;
}

std::string	Dog::getIdea(unsigned int n) const
{
	if (this->brain) return (this->brain->getIdea(n));
	else return ("does NOT exist brain.");
}

void	Dog::setIdea(unsigned int n, std::string idea) {
	if (this->brain) this->brain->setIdea(n, idea);
}
