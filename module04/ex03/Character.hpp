#ifndef __CHARACTER_HPP
#define __CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{

private:
	std::string _name;
	AMateria* 	_inventory[4];
	AMateria*	_junk[4];

	void		deepCopy(Character const & copy);

public:
	Character();
	Character(std::string name);
	Character(Character const & copy);
	Character const & operator=(Character const & rhs);
	~Character();

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif