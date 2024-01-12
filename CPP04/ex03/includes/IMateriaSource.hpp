
#ifndef IMATERIASOURCE_HPP_
# define IMATERIASOURCE_HPP_

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {};

		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(const std::string& type) = 0;
};

#endif
