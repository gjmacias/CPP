
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>
#include <sstream>

#define N_ANIMALS 10

int main()
{
	std::cout << "==================   CLONE TEST   ==================\n" << std::endl;

	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat(*cat1);
	std::cout << std::endl;
	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog();

	std::cout << std::endl;
	*dog2 = *dog1;
	std::cout << std::endl;
	
	delete cat1;
	delete cat2;
	delete dog1;
	delete dog2;

	std::cout << std::endl;

	std::cout << "==================   BASIC TEST   ==================\n" << std::endl;

	Dog *dog = new Dog();
	Cat *cat = new Cat();

	std::cout << std::endl;

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	std::cout << std::endl;

	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;

	delete dog;
	delete cat;

	std::cout << std::endl;

	std::cout << "================ SUBJECT ARRAY TEST ================\n" << std::endl;

	Animal				*animals[N_ANIMALS];
	std::stringstream	ss;

	/*
	**	That also works:
	
	for (int i = 0; i < N_ANIMALS; i++)
	{
		if (i % 3 == 0) {
			animals[i] = new Cat();
		} 
		else if (i % 3 == 1) {
			animals[i] = new Dog();
		}
		else
			animals[i] = new Animal;
	}

	**	DELETE the "for" BELOW 
	*/

	for (int i = 0; i < N_ANIMALS; i++)
	{
		if (i % 2 == 0) {
			animals[i] = new Cat();
		} 
		else {
			animals[i] = new Dog();
		}
	}
	std::cout << std::endl;

	for (int i = 0; i < N_ANIMALS; i++) {
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < N_ANIMALS; i++)
	{
		for (int j = 0; j < Brain::getConstant(); j++)
		{
			ss << "Animal[" << i << "]: idea :" << j;
			animals[i]->setIdea(j, ss.str());
			std::cout << animals[i]->getIdea(j) << std::endl;
			ss.str("");
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < N_ANIMALS; i++) {
		delete animals[i];
	}
	return (0);
}
