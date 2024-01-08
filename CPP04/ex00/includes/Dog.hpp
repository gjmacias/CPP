#ifndef DOG_HPP_
# define DOG_HPP_

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& other);
		virtual ~Dog();

		Dog& operator=(const Dog& other);

		virtual void	makeSound() const;
};

#endif
