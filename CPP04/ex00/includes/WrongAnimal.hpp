
#ifndef WRONGANIMAL_HPP_
# define WRONGANIMAL_HPP_

#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		virtual ~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& other);

		virtual void				makeSound() const;
		const std::string&	getType() const;
	protected:
		std::string			type;
};

#endif
