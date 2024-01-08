#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);


	std::cout << "\nMY TESTS:\n" << std::endl;

	me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return (0);
}