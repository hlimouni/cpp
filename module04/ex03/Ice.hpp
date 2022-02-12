#ifndef __ICE_HPP
#define __ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	std::string _name;

public:
	Ice();
	Ice(std::string const &name);
	Ice(Ice const & copy);
	Ice const & operator=(Ice const & rhs);
	~Ice();

	AMateria *clone() const;
	std::string const &getName() const;
};

#endif