#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();

	if (this->brain) {
		std::cout << "Cat: Default constructor" << std::endl;
	}
	else
	{
		std::cout << std::endl << "Error: Failed to allocate memory: "<< std::endl;
		std::cout << "Cat: Default constructor" << std::endl << std::endl;
	}
}

Cat::Cat(const Cat& other) : Animal()
{
	this->type = "Cat";
	this->brain = new Brain(*other.brain);

	if (this->brain) {
		std::cout << "Cat: Copy constructor" << std::endl;
	}
	else
	{
		std::cout << std::endl << "Error: Failed to allocate memory: "<< std::endl;
		std::cout << "Cat: Copy constructor" << std::endl << std::endl;
	}
}

Cat::~Cat()
{
	delete this->brain;

	std::cout << "Cat: Destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other) return (*this);

	if (this->brain) delete this->brain;

	this->brain = new Brain(*other.brain);

	if (this->brain) {
		std::cout << "Cat: Assignment operator" << std::endl;
	}
	else
	{
		std::cout << std::endl << "Error: Failed to allocate memory: "<< std::endl;
		std::cout << "Cat: Assignment operator" << std::endl << std::endl;
	}
	return (*this);
}



void Cat::makeSound() const {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}

std::string	Cat::getIdea(unsigned int n) const
{
	if (this->brain) return (this->brain->getIdea(n));
	else return ("does NOT exist brain.");
}

void	Cat::setIdea(unsigned int n, std::string idea) {
	if (this->brain) this->brain->setIdea(n, idea);
}
