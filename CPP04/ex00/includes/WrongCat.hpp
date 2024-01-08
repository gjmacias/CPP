#ifndef WRONGCAT_HPP_
# define WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& other);
		virtual ~WrongCat();

		WrongCat& operator=(const WrongCat& other);

		virtual void makeSound() const;
};

#endif
