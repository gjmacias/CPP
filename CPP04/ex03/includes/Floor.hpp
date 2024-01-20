#ifndef FLOOR_HPP_
# define FLOOR_HPP_

# include "AMateria.hpp"

# include	<string>

class Floor
{
	public:
		Floor( void );
		Floor( const Floor& floor );
		virtual ~Floor( void );

		Floor&	operator=( const Floor& other );
		
		void	add( Floor* floor, Floor* tmp, AMateria* materia );
		Floor*	clone( void ) const; 
		Floor*	getNext( void ) const; 
	//protected:
		AMateria*		_content;
		Floor*			_next;
};	

#endif
