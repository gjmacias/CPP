#include "Character.hpp"

#include <iostream>

Character::Character() : _nEquiped(0) {}

Character::Character(const std::string& name)
		: _name(name),
		  _nEquiped(0)		  
{
	int	i = -1;

	while (++i < Character::InventorySize) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character& other) {
	*this = other;
}

Character::~Character() {
	for (int i = 0; i < this->_nEquiped; i++) {
		delete this->_inventory[i];
	}
}

Character& Character::operator=(const Character& other)
{
	this->_name = other._name;
	this->_nEquiped = other._nEquiped;
	for (int i = 0; i < Character::InventorySize; i++) {
		this->_inventory[i] = other._inventory[i]->clone();
	}
	return *this;
}




const std::string& Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m)
{
	if (this->_nEquiped < Character::InventorySize)
	{
		this->_inventory[this->_nEquiped] = m;
		this->_nEquiped++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_nEquiped)
	{
		delete this->_inventory[idx];
		int i = idx;
		for (; i < this->_nEquiped - 1; i++) {
			this->_inventory[i] = this->_inventory[i + 1];
		}
		this->_inventory[i] = NULL;
		--(this->_nEquiped);
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->_nEquiped) {
		this->_inventory[idx]->use(target);
	}
	else {
		std::cout << "can't use materia, index " << idx << " is empty" << std::endl;
	}
}
