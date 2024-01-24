#include "Character.hpp"
#include "Floor.hpp"

#include <iostream>

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

Character::Character( void ) : _name("Who"), _floor(NULL)
{
	int	i = -1;

	while (++i < N_SLOTS) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const std::string name) : _name(name), _floor(NULL)
{
	int	i = -1;

	while (++i < N_SLOTS) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character& other) : _floor(NULL)
{
	int	i = -1;

	while (++i < N_SLOTS)
	{
		if (other._inventory[i]) {
			this->_inventory[i] = other._inventory[i]->clone();
		}
		else {
			this->_inventory[i] = NULL;
		}
	}
	this->_name = other._name;
}

Character::~Character( void ) 
{
	int	i = -1;
	Floor *tmp;

	while (++i < N_SLOTS)
	{
		if (this->_inventory[i] == 0) {
			delete this->_inventory[i];
		}
		else {
			this->_inventory[i] = NULL;
		}
	}
	while (this->_floor)
	{
		tmp = this->_floor->getNext();
		delete this->_floor;
		this->_floor = tmp;
	}
}

Character& Character::operator=(const Character& other)
{
	int	i = -1;

	while (++i < N_SLOTS)
	{
		if (this->_inventory[i] && this->_inventory[i] == 0) { 
			delete this->_inventory[i];
		}
		if (other._inventory[i] != NULL) {
			this->_inventory[i] = other._inventory[i]->clone();
		}
		else {
			this->_inventory[i] = NULL;
		}
	}
	this->_name = other._name;
	return (*this);
}

/*********** FUNCTIONS ***********/

const std::string& Character::getName( void ) const {
	return this->_name;
}

void Character::equip(AMateria *m)
{
	int	i = -1;

	while (++i < N_SLOTS)
	{
		if (this->_inventory[i] == NULL) 
		{
			this->_inventory[i] = m;
			break ;
		}
	}
	if (i == N_SLOTS)
	{
		std::cout << this->getName() << ": IS MAX POWER, do not underestimate me:" << std::endl;
		std::cout << "<< WATCH:  posibly memory leaks>>" << std::endl;
	}
}

void Character::unequip(int idx)
{
	Floor*	tmp;

	if (idx >= 0 && idx < N_SLOTS && this->_inventory[idx])
	{
		tmp = new Floor();
		if (!tmp)
		{
			std::cout << "can't THROW materia, to the FLOOR: " << this->_name; 
			std::cout << " keeps:  " << idx << ": " << std::endl;
			return ;
		}
		tmp->add(this->_floor, tmp, this->_inventory[idx]);
		this->_floor = tmp;
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < N_SLOTS && this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
	else {
		std::cout << "can't use materia, index : " << idx << " , is empty" << std::endl;
	}
}
