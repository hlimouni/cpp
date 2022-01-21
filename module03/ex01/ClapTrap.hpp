#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
	
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
		ClapTrap  const & operator=(ClapTrap const & rhs);
		~ClapTrap();

		std::string	getName() const;
		long		getHitPoints() const;
		long		getEnergyPoints() const;
		long		getAttackDamage() const;
		void		setName( std::string );
		void		setHitPoints( long );
		void		setEnergyPoints( long );
		void		setAttackDamage( long );
		void		attack( std::string const & target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

};
#endif