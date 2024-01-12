#ifndef MATERIASOURCE_HPP_
# define MATERIASOURCE_HPP_

# include <string>

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		~MateriaSource();

		MateriaSource& operator=(const MateriaSource& other);

		void				learnMateria(AMateria *materia);
		AMateria*			createMateria(const std::string& type);
	private:
		static const int	MateriaSize = 4;
		AMateria*			_materias[MateriaSource::MateriaSize];
		int					_nLearned;
};

#endif
