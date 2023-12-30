#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main() {
	ClapTrap *c1 = new ClapTrap();
	ScavTrap *c2 = new ScavTrap();
	ScavTrap *aux = new ScavTrap("NOT Sr. Scav");
	ScavTrap *c3 = new ScavTrap(*aux);

	std::cout << std::endl;

	c1->attack("Baby");
	c2->attack("Bob");
	c3->attack("Old woman");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(50);
	c2->takeDamage(500);
	c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	c2->guardGate();
	c3->guardGate();

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete c3;
	delete aux;
	return (0);
}
