
#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap()
	: _name("Clap")
	, _hitPoints(10)
	, _energyPoints(10)
	, _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name)
	, _hitPoints(10)
	, _energyPoints(10)
	, _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;

	std::cout << "ClapTrap " << this->_name << " copy created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << "ClapTrap " << this->_name << " = " << "ClapTrap " << other._name << std::endl;

	return *this;
}




void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " can't attack because is dead" << std::endl;
		return;
	}

	std::cout
		<< "ClapTrap " << this->_name << " attack " << target
		<< ", causing " << this->_attackDamage << " damage"
		<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " can't take damage because is dead" << std::endl;
		return;
	}

	if (amount > this->_hitPoints) {
		amount = this->_hitPoints;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " can't be repaired because is dead" << std::endl;
		return;
	}

	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " has repaired " << amount << " hit points" << std::endl;
}
