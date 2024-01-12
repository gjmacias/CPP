
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

int main()
{
	ScavTrap *c1 = new ScavTrap();
	FragTrap *c2 = new FragTrap();
	FragTrap *aux = new FragTrap("NOT Sr. Frag");
	FragTrap *c3 = new FragTrap(*aux);

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

	c1->guardGate();
	c2->highFivesGuys();
	c3->highFivesGuys();

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete c3;
	delete aux;
	return (0);
}
