#ifndef AMATERIA_HPP_
# define AMATERIA_HPP_

# include	<iostream>
# include	<string>
# include	"ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria( void );
		AMateria( const std::string type );
		AMateria( const AMateria& materia );
		virtual ~AMateria( void );

		AMateria&			operator=( const AMateria& materia );
		
		const std::string&	getType( void ) const;
		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target );
		void				reset( void );
	protected:
		std::string	_type;
};

#endif
