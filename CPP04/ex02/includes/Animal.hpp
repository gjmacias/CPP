
#ifndef EX02_ANIMAL_HPP_
# define EX02_ANIMAL_HPP_

#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);

		Animal& operator=(const Animal& other);

		virtual void			makeSound(void) const = 0;
		virtual std::string		getIdea(unsigned int n) const = 0;
		virtual void			setIdea(unsigned int n, std::string idea) = 0;
		const std::string&		getType(void) const;
	protected:
		std::string				type;
};

#endif
