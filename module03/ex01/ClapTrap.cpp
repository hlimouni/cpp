#include "ClapTrap.hpp"  
	
ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap object created" << std::endl;
}

ClapTrap::ClapTrap( std::string const & name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Claptrap named: " << name << " created" << std::endl;
}

ClapTrap::ClapTrap( std::string const & name, long hitPoints,
								long  energyPoints, long attackDamage )
			: _name(name),
			  _hitPoints(hitPoints),
			  _energyPoints(energyPoints),
			  _attackDamage(attackDamage)
{
	std::cout << "Claptrap named: " << name << " created with the following configuration:" << std::endl;
	std::cout << "Hit points: " << _hitPoints << std::endl;
	std::cout << "Energy points: " << _energyPoints << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap( long hitPoints,
								long  energyPoints, long attackDamage )
			: 
			  _hitPoints(hitPoints),
			  _energyPoints(energyPoints),
			  _attackDamage(attackDamage)
{
	std::cout << "Claptrap created with the following configuration:" << std::endl;
	std::cout << "Hit points: " << _hitPoints << std::endl;
	std::cout << "Energy points: " << _energyPoints << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl;
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

long	ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

long	ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

long	ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

void		ClapTrap::setName( std::string name )
{
	this->_name = name;
}

void		ClapTrap::setHitPoints( long hitPoints )
{
	this->_hitPoints = hitPoints;
}
void		ClapTrap::setEnergyPoints( long energyPoints )
{
	this->_energyPoints = energyPoints;
}
void		ClapTrap::setAttackDamage( long attackDamage )
{
	this->_attackDamage = attackDamage;
}

void	ClapTrap::attack( std::string const & target )
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attack " << target
				  << ", causing " << this->_attackDamage << " points of damage!"
				  << std::endl;
		this->_energyPoints--;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " received " << amount
				  << " points of damage!" << std::endl;
		_hitPoints - amount < 0 ? this->_hitPoints = 0 : this->_hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoints > 0)
	{
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " repaired with "
				  << amount << " energy points!" << std::endl;
		this->_energyPoints--;
	}
}

void	ClapTrap::fight(ClapTrap &attacker, ClapTrap &attacked)
{
	attacker.attack(attacked.getName());
	attacked.takeDamage(attacker.getAttackDamage());
}

void	ClapTrap::summary() const
{
	std::cout << std::setw(10) << std::left << this->_name << ":   Hit points = " << getHitPoints()
			  <<"   Energy Points = " << getEnergyPoints()
			  << "   Attack damage = " << getAttackDamage() << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap object named: " << _name << " destoryed" << std::endl;
}
