
#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap()
{
	this->_name = "Scav";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap " << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap " << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap()
{
	*this = other;

	std::cout  << "ScavTrap " << this->_name << " copy created" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout  << "ScavTrap " << this->_name << " destroyed" << std::endl;
}




ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout  << "ScavTrap " << this->_name << " = "  << "ScavTrap " << other._name << std::endl;

	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0) {
		std::cout  << "ScavTrap " << this->_name << " can't attack because is dead" << std::endl;
		return;
	}

	std::cout
		 << "ScavTrap " << this->_name << " attack " << target
		<< ", causing " << this->_attackDamage << " damage"
		<< std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_hitPoints == 0) {
		std::cout  << "ScavTrap " << this->_name << " can't guard gate because is dead" << std::endl;
		return;
	}

	std::cout  << "ScavTrap " << this->_name << " is now guarding the gate" << std::endl;
}
