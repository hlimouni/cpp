#include "ScavTrap.hpp"  

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap object created" << std::endl;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "Scavtrap named: " << name << " created" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & copy )
{
	std::cout << "Scavtrap Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap  const & ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "Scavtrap assignment operator called" << std::endl;
	this->setName(rhs.getName());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setHitPoints(rhs.getHitPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return *this;
}

void	ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap " << this->getName() << " attack " << target
			  << ", causing " << this->getAttackDamage() << " points of damage!"
			  << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << this->getName() << " have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap object named: " << this->getName() << " destoryed" << std::endl;
}