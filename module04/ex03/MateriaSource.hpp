#ifndef __MATERIASOURCE_HPP
#define __MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:
	AMateria* 	_knowledge[4];

	void deepCopy(MateriaSource const & copy);

public:
	MateriaSource();
	MateriaSource(std::string name);
	MateriaSource(MateriaSource const & copy);
	MateriaSource const & operator=(MateriaSource const & rhs);
	~MateriaSource();

	void 		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};

#endif