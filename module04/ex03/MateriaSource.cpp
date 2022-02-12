#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _knowledge()
{
	// std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource desctructor called" << std::endl;

	AMateria::removeMaterias(&this->_knowledge);
}

void MateriaSource::deepCopy(MateriaSource const & copy)
{
	AMateria::removeMaterias(&this->_knowledge);
	
	for (size_t i = 0; i < 4; i++)
	{
		if (copy._knowledge[i])
		{
			this->_knowledge[i] = copy._knowledge[i]->clone();
		}
	}
}

MateriaSource::MateriaSource(MateriaSource const & copy) : _knowledge()
{
	deepCopy(copy);
}

MateriaSource const & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		deepCopy(rhs);
	}
	return *this;
}
void 		MateriaSource::learnMateria(AMateria *m)
{
	if (AMateria::addMaterias(m, &this->_knowledge) == false)
		delete m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice" || type == "cure")
	{
		size_t i;
		for (i = 0; i < 4; i++)
		{
			if (this->_knowledge[i] && this->_knowledge[i]->getType() == type)
			{
				return (this->_knowledge[i]->clone());
			}
		}
		// if ( i == 4 )
			// std::cout << "No Materias of type " << type << " yet learned" << std::endl;
	}
	return (NULL);
}