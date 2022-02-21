#include "FragTrap.hpp"  

FragTrap::FragTrap() : ClapTrap(initialHitPoints, initialEnergyPoints, initialAttackDamage)
{
	std::cout << "FragTrap object created" << std::endl;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap(name, initialHitPoints, initialEnergyPoints, initialAttackDamage)
{
	std::cout << "FragTrap named: " << name << " created" << std::endl;
}

FragTrap::FragTrap( FragTrap const & copy )
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap  const & FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
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
	std::cout << " * * * FragTrap " << this->getName() << " is asking for a HIGH FIVE!! * * *" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap object named: " << this->getName() << " destoryed" << std::endl;
}
