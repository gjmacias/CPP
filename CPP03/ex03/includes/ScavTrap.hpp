#ifndef EX03_SCAVTRAP_HPP_
# define EX03_SCAVTRAP_HPP_

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		virtual ~ScavTrap();

		ScavTrap& operator=(const ScavTrap& other);

		virtual void attack(const std::string& target);
		void guardGate();
	protected:
};

#endif
