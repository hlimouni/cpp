#include "FragTrap.hpp"  

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap object created" << std::endl;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap named: " << name << " created" << std::endl;
}

FragTrap::FragTrap( FragTrap const & copy ) : ClapTrap(copy)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap  const & FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	this->setName(rhs.getName());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setHitPoints(rhs.getHitPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return *this;
}

void	FragTrap::attack( std::string const & target )
{
	std::cout << "FragTrap " << this->getName() << " attack " << target
			  << ", causing " << this->getAttackDamage() << " points of damage!"
			  << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->getName() << " is asking for a high five" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap object named: " << this->getName() << " destoryed" << std::endl;
}
