#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap()
{
	this->_name = "Frag";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap()
{
	*this = other;

	std::cout << "FragTrap " << this->_name << " copy created" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << "FragTrap " << this->_name << " = " << "FragTrap "<< other._name << std::endl;

	return *this;
}



void FragTrap::highFivesGuys()
{
	if (this->_hitPoints == 0) {
		std::cout << "FragTrap " << this->_name << " can't hight fives because is dead" << std::endl;
		return;
	}

	std::cout << "FragTrap " << this->_name << " hight fives guys!!!" << std::endl;
}
