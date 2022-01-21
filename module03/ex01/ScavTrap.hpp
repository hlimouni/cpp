#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:

		ScavTrap();
		ScavTrap( std::string const & name );
		ScavTrap( ScavTrap const & copy );
		~ScavTrap();

		ScavTrap 	const & operator=(ScavTrap const & rhs);
		void		attack( std::string const & target );
		void		guardGate();

};
#endif