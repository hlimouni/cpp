#include "Cure.hpp"

Cure::Cure(std::string const &name) : AMateria("Cure"), _name(name)
{
	std::cout << "New Cure materia created named " << this->_name << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure materia named " << this->_name << " is destoryed" << std::endl;
	delete (clone());
}

Cure::Cure(Cure const & copy) : AMateria(copy)
{
	std::cout << "Cure materia named " << copy._name << " copied" << std::endl;
	*this = copy;
}

Cure	const & Cure::operator=(Cure const & rhs)
{
	std::cout << "Assignement operator for Cure materia named " << rhs._name << " is called" << std::endl;
	if (this == &rhs)
		return *this;
	AMateria::operator=(rhs);
	this->_name = rhs._name;
}

AMateria* Cure::clone() const
{
	static Cure *clone;

	if (!clone)
		clone = new Cure(*this);
	return clone;
}

std::string const & Cure::getName() const
{
	return this->_name;
}