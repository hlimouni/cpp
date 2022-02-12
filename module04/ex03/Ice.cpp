#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "New Ice materia created" << std::endl;
}

Ice::Ice(std::string const &name) : AMateria("ice"), _name(name)
{
	// std::cout << "New Ice materia created named " << this->_name << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice materia named " << this->_name << " is destoryed" << std::endl;
}

Ice::Ice(Ice const & copy) : AMateria(copy)
{
	// std::cout << "Ice materia named [" << copy._name << "] copied" << std::endl;
	*this = copy;
}

Ice	const & Ice::operator=(Ice const & rhs)
{
	// std::cout << "Assignement operator for Ice materia named " << rhs._name << " is called" << std::endl;
	if (this == &rhs)
		return *this;
	AMateria::operator=(rhs);
	this->_name = rhs._name;
	return *this;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

std::string const & Ice::getName() const
{
	return this->_name;
}