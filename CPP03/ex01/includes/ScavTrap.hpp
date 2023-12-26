#ifndef EX01_SCAVTRAP_HPP_
# define EX01_SCAVTRAP_HPP_

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap& other);

		void attack(const std::string& target);
		void guardGate();
	private:
};

#endif
