#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap object created" << std::endl;
}

DiamondTrap::DiamondTrap( std::string const & name )
	: ClapTrap(name + "_clap_name", FragTrap::initialHitPoints, ScavTrap::initialEnergyPoints, FragTrap::initialAttackDamage), _name(name)
{
	std::cout << "DiamondTrap named " << name << " created with this configuration:" << std::endl;
	std::cout << "  Hit Points: " << getHitPoints() << std::endl;
	std::cout << "  Energy Points: " << getEnergyPoints() << std::endl;
	std::cout << "  Attack Damage: " << getAttackDamage() << std::endl;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & copy ) :ClapTrap(copy)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap  const & DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	this->_name = rhs._name;
	return *this;
}

void	DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << " * * * DiamondTrap '" << this->_name << "': my ClapTrap name is '" << this->getName() << "\' * * *" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap object named: " << this->_name << " is destoryed" << std::endl;
}
