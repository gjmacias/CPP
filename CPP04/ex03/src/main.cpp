#include	<iostream>
#include	<iomanip>
#include	"AMateria.hpp"
#include	"MateriaSource.hpp"
#include	"Character.hpp"
#include	"Ice.hpp"
#include	"Cure.hpp"

#define FILL		40
#define C_DEFAULT	"\033[0m"
#define C_RED		"\033[1;91m"
#define C_GREEN		"\033[1;92m"
#define C_YELLOW	"\033[1;93m"
#define C_BLUE		"\033[1;94m"
#define C_PINK		"\033[1;95m"
#define C_CYAN		"\033[1;96m"
#define C_WHITE		"\033[1;97m"
#define C_PURPLE	"\033[1;38;2;150;25;250m"

int main( void )
{ 
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
		delete bob;
		delete me;
		delete src;
		return 0;
	}
	{
		// IMateriaSource* src = new MateriaSource();
		// src->learnMateria(new Ice());
		// src->learnMateria(new Cure());
		// src->learnMateria(new Ice());
		// src->learnMateria(new Cure());
		
		// std::cout << std::endl;

		// Character* me = new Character("me");
		// std::cout << "IT'S ME: " << std::endl;
		// AMateria* tmp;
		// tmp = src->createMateria("ice");
		// std::cout << "create ice" << std::endl;
		// me->equip(tmp);
		// std::cout << "ME: equip ice" << std::endl;
		// tmp = src->createMateria("cure");
		// std::cout << "create cure" << std::endl;;
		// me->equip(tmp);
		// std::cout << "ME: equip cure" << std::endl;
		// me->equip(tmp);
		// std::cout << "ME: equip cure" << std::endl;
		// me->equip(tmp);
		// std::cout << "ME: equip cure" << std::endl;

		// std::cout << std::endl;

		// ICharacter* bob = new Character(*me);
		// std::cout << "NOW BOB: " << std::endl;
		// bob->equip(tmp);
		// std::cout << "BOB: equip cure" << std::endl;
		// me->use(0, *bob);
		// std::cout << "ME: use 0 in bob" << std::endl;
		// me->use(1, *bob);
		// std::cout << "ME: use 1 in bob" << std::endl;	
		// bob->use(1, *bob);
		// std::cout << "BOB: use 1 in bob" << std::endl;

		// std::cout << std::endl;


		// me->unequip(1);
		// std::cout << "ME: unequip 1" << std::endl;
		// me->unequip(0);
		// std::cout << "ME: unequip 0" << std::endl;
		// me->unequip(1);
		// std::cout << "ME: unequip 1" << std::endl;

		// tmp = src->createMateria("cure");
		// std::cout << "create cure" << std::endl;;
		// me->equip(tmp);
		// std::cout << "ME: equip cure" << std::endl;

		// me->use(0, *bob);
		// std::cout << "use 0 in bob" << std::endl;
		// me->use(3, *bob);
		// std::cout << "ME: use 0 in bob" << std::endl;

		// std::cout << std::endl;

		// delete bob;
		// std::cout << "chao bob" << std::endl;
		// delete me;
		// std::cout << "chao me " << std::endl;
		// delete src;
		// std::cout << "chao src " << std::endl;
		// return (0);
	}
}
