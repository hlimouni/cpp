#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) :_type(type)
{
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & copy)
{
	// std::cout << "AMateria Copy constructor called" << std::endl;
	*this = copy;
}

AMateria  const & AMateria::operator=( AMateria const & rhs )
{
	// std::cout << "AMateria Assignement operator called" << std::endl;
	if (this == &rhs)
		return *this;
	this->_type = rhs._type;
	return *this;
}

void	AMateria::removeMaterias(AMateria* (*arr)[4])
{
	for (size_t i = 0; i < 4; i++)
	{
		if ((*arr)[i])
		{
			delete (*arr)[i];
			(*arr)[i] = NULL;
		}
	}
}

bool	AMateria::addMaterias(AMateria *m, AMateria* (*arr)[4])
{
	size_t i = 0;
	while ((*arr)[i])
		i++;
	if (i < 4)
	{
		(*arr)[i] = m;
		// std::cout << "New Materia of type " << (*arr)[i]->getType() << " added at idx " << i << std::endl;
		return true;
	}
	// std::cout << "No empty room to add new materia" << std::endl;
	return false;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}