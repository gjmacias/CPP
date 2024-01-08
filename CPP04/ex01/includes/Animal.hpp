
#ifndef EX00_ANIMAL_HPP_
# define EX00_ANIMAL_HPP_

#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);

		Animal& operator=(const Animal& other);

		virtual void			makeSound(void) const;
		virtual std::string		getIdea(unsigned int n) const;
		virtual void			setIdea(unsigned int n, std::string idea);
		const std::string&		getType(void) const;
	protected:
		std::string				type;
};

#endif
