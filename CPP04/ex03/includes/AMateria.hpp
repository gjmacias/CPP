#ifndef AMATERIA_HPP_
# define AMATERIA_HPP_

# include "Character.hpp"

# include <string>

class ICharacter;

class AMateria
{
	public:
		AMateria(const std::string& type);
		AMateria(const AMateria& other);
		virtual ~AMateria();

		AMateria& operator=(const AMateria& other);

		const std::string& getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
	protected:
		std::string			_type;
	private:
		AMateria();
};

#endif
