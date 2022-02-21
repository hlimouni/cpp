#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
	
class HumanA  
{

private:
	Weapon& 	_weapon;
	std::string	_name;

public:
	HumanA(Weapon &weapon);
	HumanA(std::string const name, Weapon & weapon);
	~HumanA();
	void	attack() const;


};
#endif