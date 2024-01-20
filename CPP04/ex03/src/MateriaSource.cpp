#include "MateriaSource.hpp"

/*********** CONSTRUCTOR & DESTRUCTOR ***********/

MateriaSource::MateriaSource() : _nLearned(0)
{
	int	i = -1;

	while (++i < N_MSIZE) {
		this->_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	int	i = -1;

	while (++i < N_MSIZE)
	{
		if (other._materias[i]) {
			this->_materias[i] = other._materias[i]->clone();
		}
		else {
			this->_materias[i] = NULL;
		}
	}
	this->_nLearned = other._nLearned;
}

MateriaSource::~MateriaSource()
{
	int	i = -1;

	while (++i < N_MSIZE)
	{
		if (this->_materias[i]) {
			delete this->_materias[i];
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	int	i = -1;

	while (++i < N_MSIZE)
	{
		if (this->_materias[i]) delete this->_materias[i];
		if (other._materias[i]) {
			this->_materias[i] = other._materias[i]->clone();
		}
		else {
			this->_materias[i] = NULL;
		}
	}
	this->_nLearned = other._nLearned;
	return (*this);
}

/*********** FUNCTIONS ***********/

void MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_nLearned < N_MSIZE)
	{
		this->_materias[this->_nLearned] = materia;
		this->_nLearned++;
	}
	else
	{
		std::cout << "Error: MateriaSource: CANNOT learn more: " << std::endl;
		std::cout << "<< Watch MEMORY LEAKS: free yourself THIS: " << std::endl;
		std::cout << "| "<< materia->getType() << " |    I'm lazy>>" << std::endl;
	}
}

AMateria *MateriaSource::createMateria(const std::string& type)
{
	int	i = -1;

	while (++i < N_MSIZE)
	{
		if (this->_materias[i]->getType() == type) {
			return this->_materias[i]->clone();
		}
	}
	return (NULL);
}
