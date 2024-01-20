#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

# include	<string>
# include	<iostream>
# include	"ICharacter.hpp"
# include	"Floor.hpp"

# define N_SLOTS	4

class Character : public ICharacter
{
	public:
		Character( void );
		Character( std::string name );
		Character( const Character& character );
		~Character( void );

		Character&	operator=( const Character& character );
		
		const std::string&	getName( void ) const;
		void				equip( AMateria* materia );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );
	private:
		std::string		_name;
		AMateria*		_inventory[ N_SLOTS ];
		Floor*			_floor;
};	

#endif
