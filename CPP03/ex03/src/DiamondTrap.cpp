#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap()
{
	this->_name = "Diamond";
	this->ClapTrap::_name = std::string("Diamond").append("_clap_name");
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap " << this->_name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->ClapTrap::_name = name.append("_clap_name");
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap " << this->_name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(), ScavTrap(), FragTrap()
{
	*this = other;

	std::cout << "DiamondTrap " << this->_name << " copy created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " destroyed" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	this->ClapTrap::_name = other.ClapTrap::_name;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << "DiamondTrap " << this->_name << " = " << other._name << std::endl;

	return *this;
}





void DiamondTrap::attack(const std::string& target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
	std::cout << "I am " << this->_name << ", my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
