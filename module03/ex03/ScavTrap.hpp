#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap( std::string const & name );
		ScavTrap( ScavTrap const & copy );
		~ScavTrap();

		ScavTrap 	const & operator=(ScavTrap const & rhs);
		void		attack( std::string const & target );
		void		guardGate();

		static const long initialHitPoints = 100;
		static const long initialEnergyPoints = 50;
		static const long initialAttackDamage = 20;
};
#endif