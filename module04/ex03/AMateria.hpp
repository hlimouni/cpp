#ifndef __AMATERIA_HPP
#define __AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

protected:
	std::string _type;

public :
	AMateria(std::string const &type);
	AMateria(AMateria const & copy);
	AMateria const & operator=(AMateria const & rhs);
	virtual ~AMateria();

	static void		removeMaterias(AMateria* (*arr)[4]);
	static bool		addMaterias(AMateria* m, AMateria* (*arr)[4]);

	std::string const &getType() const; // Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

};

#endif