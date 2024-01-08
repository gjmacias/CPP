#ifndef CURE_HPP_
# define CURE_HPP_

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& other);
		~Cure();

		Cure& operator=(const Cure& other);

		AMateria* clone() const;
		void use(ICharacter& target);
};
