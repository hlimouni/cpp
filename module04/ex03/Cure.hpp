#ifndef __CURE_HPP
#define __CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string _name;

public:
	Cure();
	Cure(std::string const &name);
	Cure(Cure const & copy);
	Cure const & operator=(Cure const & rhs);
	~Cure();

	AMateria *clone() const;
	std::string const &getName() const;
};

#endif