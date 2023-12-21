#include "Zombie.hpp"

#include <iostream>

int main()
{
	int		size;
	Zombie	*horde;

	size = 4;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_01");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = 2;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "'");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = 0;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_03");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = -1;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_04");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	return (0);
}
