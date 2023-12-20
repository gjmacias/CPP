#include "Zombie.hpp"

#include <iostream>

int main() {
	Zombie	*pepe = new Zombie("pepe");

	pepe->announce();
	randomChump("otaku zombie");
	delete pepe;
	std::cout << std::endl;

	Zombie	*paco = newZombie("paco");
	
	paco->announce();

	Zombie	*bob = newZombie("bob");
	bob->announce();
	paco->announce();
	paco->announce();
	paco->announce();
	delete paco;
	bob->announce();
	delete bob;
	std::cout << std::endl;
	randomChump("vegan zombie");
	randomChump("vegan zombie");
	randomChump("carnivorous zombie");
	randomChump("Le Zombie");
	return (0);
}
