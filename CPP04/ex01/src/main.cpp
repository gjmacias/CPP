
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>
#include <sstream>

#define N_ANIMALS 10

int main()
{
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

	for (int i = 0; i < N_ANIMALS; i++) {
		if (i % 2 == 0) {
			animals[i] = new Cat();
		} else {
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
		for (int j = 0; j < 100; j++)
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
