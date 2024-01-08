#ifndef CAT_HPP_
# define CAT_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal 
{
	public:
		Cat();
		Cat(const Cat& other);
		virtual ~Cat();

		Cat& operator=(const Cat& other);

		virtual void			makeSound() const;
		virtual std::string		getIdea(unsigned int n) const;
		virtual void			setIdea(unsigned int n, std::string idea);
	private:
		Brain*			brain;
};

#endif
