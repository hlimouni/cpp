#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
	
class Weapon
{

private:
	std::string _type;

public:
	Weapon();
	Weapon(std::string const type);
	~Weapon();

	std::string const &	getType() const;
	void 				setType(std::string const type);

};
#endif