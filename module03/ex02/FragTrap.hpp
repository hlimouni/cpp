#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap();
		FragTrap( std::string const & name );
		FragTrap( FragTrap const & copy );
		~FragTrap();

		FragTrap 	const & operator=(FragTrap const & rhs);
		void		attack( std::string const & target );
		void		highFiveGuys();

};
#endif