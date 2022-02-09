#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) :_type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & copy)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = copy;
}

AMateria  const & AMateria::operator=( AMateria const & rhs )
{
	std::cout << "AMateria Assignement operator called" << std::endl;
	if (this == &rhs)
		return *this;
	this->_type = rhs._type;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}