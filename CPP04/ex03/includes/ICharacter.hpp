#ifndef ICHARACTER_HPP_
# define ICHARACTER_HPP_

# include <string>

# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter( void ) {};

		virtual const std::string&	getName( void ) const = 0;
		virtual void				equip( AMateria* m ) = 0;
		virtual void				unequip( int idx ) = 0;
		virtual void				use( int idx, ICharacter& target ) = 0;
};

#endif
