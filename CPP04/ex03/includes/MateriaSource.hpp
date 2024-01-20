#ifndef MATERIASOURCE_HPP_
# define MATERIASOURCE_HPP_

# include <string>

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

# define N_MSIZE	4

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& other );
		~MateriaSource( void );

		MateriaSource& operator=( const MateriaSource& other );

		void				learnMateria( AMateria *materia );
		AMateria*			createMateria( const std::string& type );
	private:
		AMateria*			_materias[N_MSIZE];
		int					_nLearned;
};

#endif
