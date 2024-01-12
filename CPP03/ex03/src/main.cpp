#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

int main()
{
	ScavTrap *c1 = new ScavTrap();
	DiamondTrap *c2 = new DiamondTrap();
	DiamondTrap *aux = new DiamondTrap("NOT Sr. Diamond");
	DiamondTrap *c3 = new DiamondTrap(*aux);

	std::cout << std::endl;

	c1->attack("Baby");
	c2->attack("Bob");
	c3->attack("Old woman");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(500);
	c2->takeDamage(50);
	c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	c1->guardGate();
	c2->guardGate();
	c3->guardGate();

	std::cout << std::endl;

	c2->highFivesGuys();
	c3->highFivesGuys();

	std::cout << std::endl;

	c2->whoAmI();
	c3->whoAmI();

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete aux;
	delete c3;
	return (0);
}
