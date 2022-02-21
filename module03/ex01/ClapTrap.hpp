#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <iomanip>
	
class ClapTrap  
{
	private:

		std::string _name;
		long		_hitPoints;
		long		_energyPoints;
		long		_attackDamage;

	public:

		ClapTrap();
		ClapTrap( std::string const & name );
		ClapTrap( ClapTrap const & copy );
		ClapTrap( std::string const & name, long hitPoints,
				long energyPoints, long attackDamage );
		ClapTrap( long hitPoints,
				long energyPoints, long attackDamage );
		ClapTrap  const & operator=(ClapTrap const & rhs);
		~ClapTrap();

		std::string	getName() const;
		long getEnergyPoints() const;
		long getHitPoints() const;
		long getAttackDamage() const;
		void setName( std::string );
		void setHitPoints( long );
		void setEnergyPoints( long );
		void setAttackDamage( long );
		void attack( std::string const & target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		void summary() const;

		static void	fight(ClapTrap &attacker, ClapTrap &attacked);
};

#endif