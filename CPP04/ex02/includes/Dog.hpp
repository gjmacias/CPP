#ifndef DOG_HPP_
# define DOG_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& other);
		virtual ~Dog();

		Dog& operator=(const Dog& other);

		virtual void			makeSound() const;
		virtual std::string		getIdea(unsigned int n) const;
		virtual void			setIdea(unsigned int n, std::string idea);
	private:
		Brain*			brain;
};

#endif
