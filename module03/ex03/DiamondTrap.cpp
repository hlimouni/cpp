#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap object created" << std::endl;
}

DiamondTrap::DiamondTrap( std::string const & name ) : ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(name), ScavTrap(name), _name(name)
{
	// this->setHitPoints(FragTrap::getHitPoints());
	// this->setEnergyPoints(ScavTrap::getEnergyPoints());
	// this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap named: " << name << " created" << std::endl;
	std::cout << "Here's its configuration:" << std::endl;
	std::cout << "Hit Points: " << this->getHitPoints() << std::endl;
	std::cout << "Energy Points: " << this->getEnergyPoints() << std::endl;
	std::cout << "Attack Damage: " << this->getAttackDamage() << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & copy ) :ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap  const & DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	this->setName(rhs.getName());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setHitPoints(rhs.getHitPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return *this;
}

void	DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: '" << this->_name << "\'\n" << "ClapTrap name '" << this->getName() << '\'' << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap object named: " << this->_name << " is destoryed" << std::endl;
}
