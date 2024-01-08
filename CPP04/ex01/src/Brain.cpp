#include "Brain.hpp"

#include <iostream>

Brain::Brain()
{
	std::cout << "Brain: Default constructor" << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;

	std::cout << "Brain: Copy constructor" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain: Destructor" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	int	i = -1;

	while (++i <  NIdeas)
	{
		this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain: Assignment operator" << std::endl;
	return (*this);
}



std::string	Brain::getIdea(unsigned int n) const{
	return (this->ideas[n]);
}

void	Brain::setIdea(unsigned int n, std::string idea) {
	this->ideas[n] = idea;
}
