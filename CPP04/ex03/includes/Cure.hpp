#ifndef CURE_HPP_
# define CURE_HPP_

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( const Cure& other );
		~Cure( void );

		Cure& operator=( const Cure& other );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );
};

#endif
