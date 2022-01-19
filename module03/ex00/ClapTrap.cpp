#include "ClapTrap.hpp"  
	
ClapTrap::ClapTrap() : _hitPoints(0), _energyPoints(0), _attackDamage(0)
{
	std::cout << "ClapTrap object created" << std::endl;
}

ClapTrap::ClapTrap( std::string const & name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Claptrap named: " << name << " created" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap  const & ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

std::string	ClapTrap::getName() const
{
	return this->_name;
}

void	ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap " << this->_name << " attack " << target
			  << ", causing " << this->_attackDamage << " points of damage!"
			  << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " received " << amount
			  << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " repaired with "
			  << amount << " energy points!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap object destoryed" << std::endl;
}
