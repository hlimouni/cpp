#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
	
class HumanB  
{

private:
	Weapon* 	_weapon;
	std::string	_name;

public:
	HumanB();
	HumanB(std::string const name);
	~HumanB();
	void	setWeapon(Weapon & weapon);
	void	attack() const;


};
#endif